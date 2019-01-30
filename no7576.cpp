#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX(X, Y) (X) > (Y) ? (X):(Y)

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int a[1001][1001];
int N, M;
int mx = 0;

bool check(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            mx = MAX(a[i][j], mx);
            if(a[i][j]==0) return false;
        }
    }
    return true;
}

int main(){
    scanf("%d %d", &M, &N);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    queue<pair<int, int>> q;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(a[i][j]==1){
                q.push(make_pair(i,j));
            }
        }
    }
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx>=0&&nx<N&&ny>=0&&ny<M&&(a[nx][ny]!=-1)){
                if(a[nx][ny]==0){
                    q.push(make_pair(nx,ny));
                    a[nx][ny] = a[cx][cy] + 1;
                    
                }
            }
        }
        q.pop();
    }
    
    if(check()){
        printf("%d\n", mx-1);
    }else printf("%d", -1);
    
    
    return 0;
}