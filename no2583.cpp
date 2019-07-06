#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int check[100][100];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i = 0; i < k; i++){
        int ldx, ldy, rux, ruy;
        scanf("%d %d %d %d", &ldx, &ldy, &rux, &ruy);
        for(int j = ldx; j < rux; j++){
            for(int u = ldy; u < ruy; u++){
                check[u][j] = -1;
            }
        }
    }
    vector<int> area;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check[i][j]!=0) continue;
            int ans = 0;
            queue<pair<int, int>> qu;
            qu.push(make_pair(i,j));
            ans++;
            check[i][j] = cnt;
            while(!qu.empty()){
                int cx = qu.front().first;
                int cy = qu.front().second;
                qu.pop();
                for(int u = 0; u < 4; u++){
                    int nx = cx + dx[u];
                    int ny = cy + dy[u];
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&check[nx][ny]==0){
                        qu.push(make_pair(nx,ny));
                        ans++;
                        check[nx][ny] = cnt;
                    }
                }
            }
            area.push_back(ans);
            cnt++;
        }
    }
    printf("%d\n", cnt-1);
    sort(area.begin(), area.end());
    for(int i = 0; i < area.size(); i++){
        printf("%d ", area[i]);
    }
    
    return 0;
}