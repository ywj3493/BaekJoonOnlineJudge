#include <iostream>
#include <queue>
#include <tuple>
#include <string.h>
using namespace std;

int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {1,-1,2,-2,2,-2,1,-1};
bool check[300][300];

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(check,false,sizeof(check));
        queue<tuple<int, int, int>> qu;
        int ans = 0;
        int cnt = 1;
        int l, cx, cy, gx, gy;
        cin >> l >> cx >> cy >> gx >> gy;
        qu.push(make_tuple(1,cx,cy));
        check[cx][cy] = true;
        while(!qu.empty()){
            if(check[gx][gy]) break;
            int cnt, curx, cury;
            tie(cnt, curx, cury) = qu.front();
            ans = cnt;
            qu.pop();
            for(int i = 0; i < 8; i++){
                int nx = curx + dx[i];
                int ny = cury + dy[i];
                if(nx>=0&&ny>=0&&nx<l&&ny<l&&!check[nx][ny]){
                    qu.push(make_tuple(cnt+1,nx,ny));
                    check[nx][ny] = true;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}