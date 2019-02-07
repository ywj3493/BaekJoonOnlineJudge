#include <stdio.h>
#include <iostream>

using namespace std;

void zipImg(int x, int y, int **arr, int size){
    int i, j;
    int index;
    bool all = true;
    
    if(size==1){
        printf("%d", arr[y][x]);
    }else{
        index = arr[y][x];
        for (i = y; i < y + size; i++){
            for (j = x; j < x + size; j++){
                all = (arr[i][j] != index) ? false : all;
                if(!all) break;
            }
        }
        if(all){
            printf("%d",index);
        }else{
            printf("(");
            int nextsize = size/2;
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    zipImg(x+j*nextsize, y+i*nextsize, arr, nextsize);
                }
            }
            printf(")");
        }
        
    }
}

int main(void){
    int N = 0;
    int i, j;
    scanf("%d", &N);
    
    if(N<0||N>64) return -1;
    
    
    int **img = new int*[N];
    
    for (i = 0; i < N; i++){
        img[i] = new int[N];
    }
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%1d", &img[i][j]);
        }
    }
    
    zipImg(0, 0, img, N);

    for (i = 0; i < N; i++){
        delete [] img[i];
    }
    delete [] img;
    
    return 0;
}