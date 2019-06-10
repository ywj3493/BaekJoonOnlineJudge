#include <iostream>
#include <queue>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sx, sy;
        cin >> sx >> sy;
        vector<pair<int,int>> combi;
        for(int i = 0; i < n; i++){
            int tx, ty;
            cin >> tx >> ty;
            combi.push_back(make_pair(tx,ty));
        }
        int gx, gy;
        cin >> gx >> gy;
        queue<pair<int,int>> qu;
        bool ok = false;
        qu.push(make_pair(sx,sy));
        while(!qu.empty()){
            int cx = qu.front().first;
            int cy = qu.front().second;
            qu.pop();
            if((abs(cx-gx)+(abs(cy-gy))<=1000)) ok = true;
            for(int i = 0; i < combi.size(); i++){
                int nx = combi[i].first;
                int ny = combi[i].second;
                if((abs(cx-nx)+abs(cy-ny))<=1000){
                    qu.push(make_pair(nx,ny));
                    combi.erase(combi.begin()+i);
                }
            }
        }
        if(ok) cout << "happy" << endl;
        else cout << "sad" << endl;
    }
    
    return 0;
}