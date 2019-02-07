#include <iostream>

using namespace std;

int cnt[3] = {0,};

void paperNum (int x, int y, int **arr, int size){
    int i, j;
    int index = arr[y][x];
    bool all = true;
    
    if(size == 1){
        cnt[index+1]++;
        return ;
    }
    

    for (i = y; i < size + y; i++){
        for (j = x; j < size + x; j++){
            if(arr[i][j] != index){
                all = false;
            }
            if(!all) break
        }
    }
    
    if(!all){
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                paperNum(x + size/3 * i, y + size/3 * j, arr, size/3);
            }
        }
    }else{
        cnt[index+1]++;
    }
    
    return ;
}

int main(void){
    int N = 0;
    int i, j;
    
    cin >> N;
    
    if(N<0||N>2188) return -1;
    if(((N%3)!=0)&&(N!=1)) return -1;
    
    int **mat = new int*[N];
    for(i = 0; i < N; i++){
        mat[i] = new int[N];
    }
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }
    
    paperNum(0,0,mat,N);
    
    cout << cnt[0] << endl;
    cout << cnt[1] << endl;
    cout << cnt[2] << endl;
    
    for(i = 0; i < N; i++){
        delete [] mat[i];
    }
    delete[] mat;
    
    
    return 0;
}