#include <iostream>
#include <tuple>
#include <queue>
#include <algorithm>
using namespace std;
int N, M;
int m[1001][1001] = {0,};
int c[1001][1001][2] = {0,};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d", &m[i][j]);
        }
    }
    
    queue<tuple<int, int, int>> q;
    q.push(make_tuple(0,0,0));
    c[0][0][0] = 1;
    while(!q.empty()){
        int cx, cy, cz;
        tie(cx, cy, cz) = q.front();
        q.pop();
        for(int i =0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx>=0&&ny>=0&&nx<N&&ny<M){
                if(c[nx][ny][cz]==0&&m[nx][ny]==0){
                    q.push(make_tuple(nx,ny,cz));
                    c[nx][ny][cz] = c[cx][cy][cz]+1;
                }
                else if(c[nx][ny][cz]==0&&m[nx][ny]==1&&cz==0){
                    q.push(make_tuple(nx,ny,cz+1));
                    c[nx][ny][cz+1] = c[cx][cy][cz]+1;
                }
            }
        }
    }
    
    if(c[N-1][M-1][0]!=0&&c[N-1][M-1][1]!=0){
        printf("%d\n", min(c[N-1][M-1][0], c[N-1][M-1][1]));
    }else if(c[N-1][M-1][0]!=0){
        printf("%d\n", c[N-1][M-1][0]);
    }else if(c[N-1][M-1][1]!=0){
        printf("%d\n", c[N-1][M-1][1]);
    }else{
        printf("%d\n", -1);
    }
    
    
    return 0;
}