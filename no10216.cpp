#include <iostream>
#include <string.h>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

bool c[5001][5001];

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(c, false, sizeof(c));
        queue<tuple<int, int, int>> qu;
        vector<tuple<int, int, int>> ve;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x, y, r;
            cin >> x >> y >> r;
            ve.push_back(make_tuple(x,y,r));
        }
        int ans = 0;
        for(int i = 0; i < ve.size(); i++){
            int x, y, r;
            tie(x, y, r) = ve[i];
            if(c[x][y]) continue;
            ans++;
            qu.push(make_tuple(x,y,r));
            c[x][y] = true;
            while(!qu.empty()){
                int cx, cy, cr;
                tie(cx, cy, cr) = qu.front();
                qu.pop();
                for(int j = 0; j < ve.size(); j++){
                    if(j==i) continue;
                    int nx, ny, nr;
                    tie(nx, ny, nr) = ve[j];
                    if((((cx-nx)*(cx-nx)+(cy-ny)*(cy-ny))<=((cr+nr)*(cr+nr)))&&(!c[nx][ny])){
                        qu.push(make_tuple(nx,ny,nr));
                        c[nx][ny] = true;
                    }
                }
            }
            
        }
        cout << ans << endl;
    }
    
    return 0;
}