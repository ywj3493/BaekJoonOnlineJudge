#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int map[101][101];
int c[101][101];
int n;

int bfs(int pivot){
    memset(c,0,sizeof(c));
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int sx = i;
            int sy = j;
            if(map[sx][sy]<=pivot||c[sx][sy]) continue;
            cnt++;
            queue<pair<int,int>> qu;
            qu.push(make_pair(sx,sy));
            c[sx][sy] = cnt;
            while(!qu.empty()){
                int cx = qu.front().first;
                int cy = qu.front().second;
                qu.pop();
                for(int u = 0; u < 4; u++){
                    int nx = cx+dx[u];
                    int ny = cy+dy[u];
                    if(nx>=0&&ny>=0&&nx<n&&ny<n&&map[nx][ny]>pivot&&c[nx][ny]==0){
                        qu.push(make_pair(nx,ny));
                        c[nx][ny] = cnt;
                    }
                }
            }
        }
    }
    return cnt;
}

int main(){
    cin >> n;
    int mn=101;
    int mx=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
            if(mx<map[i][j]) mx = map[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i <= mx; i++){
        int temp = bfs(i);
        if(ans<temp) ans = temp;
    }
    cout << ans;
    return 0;
}