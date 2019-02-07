#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int arr[26][26];
int check[26][26];
int di[4][2] = { {-1,0}, {1,0}, {0,-1}, {0, 1}};
vector<int> ans; 
int N;

int numbering(int c, int x, int y, int num){
    check[x][y] = c;
    for(int i = 0; i < 4; i++){
        int nx = x + di[i][0]; 
        int ny = y + di[i][1];
        if((nx>=0)&&(ny>=0)&&(nx<N)&&(ny<N)){
            if(arr[nx][ny]==1&&check[nx][ny]==0){
                num = numbering(c, nx, ny, num+1);
            }
        }
    }
    return num;
}


int main(){
    int cnt = 1;
    scanf("%d", &N);
    for(int y = 0; y < N; y++){
        for(int x = 0; x < N; x++){
            scanf("%1d", &arr[x][y]);
        }
    }
    
    for(int y = 0; y < N; y++){
        for(int x = 0; x < N; x++){
            if((arr[x][y]==1)&&(check[x][y]==0)){
                ans.push_back(numbering(cnt, x, y, 1));
                cnt++;
            }
        }
    }
    
    printf("%d\n", cnt-1);
    sort(ans.begin(), ans.end());
    for(int i : ans){
        printf("%d\n", i);
    }
    
    return 0;
}