#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int map[8][8];
int check[8][8];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n, m;
int mx;

void spread();

void setwall(int cnt){
    if(cnt==3){
        spread();
        return ;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[i][j]==0){
                map[i][j] = 1;
                setwall(cnt+1);
                map[i][j] = 0;
            }
        }
    }
}

void spread(){
    queue<pair<int, int>> qu;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[i][j]==2) qu.push(make_pair(i,j));
            check[i][j] = map[i][j];
        }
    }
    while(!qu.empty()){
        int cx = qu.front().first;
        int cy = qu.front().second;
        qu.pop();
        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx>=0&&ny>=0&&nx<n&&ny<m&&check[nx][ny]==0){
                qu.push(make_pair(nx,ny));
                check[nx][ny] = 2;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check[i][j]==0) ans++;
        }
    }
    if(mx<ans) mx = ans;
    return ;
}

int main(){
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &map[i][j]);
        }
    }
    
    setwall(0);
    printf("%d", mx);
    
    
    return 0;
}