#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool ok[501];

int main(){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    vector<int> ve[n+1];
    for(int i = 0; i < m; i++){
        int t1, t2;
        scanf("%d %d", &t1, &t2);
        ve[t1].push_back(t2);
        ve[t2].push_back(t1);
    }
    queue<pair<int, int>> qu;
    qu.push(make_pair(1,0));
    ok[1]=true;
    int ans = 0;
    while(!qu.empty()){
        int cur = qu.front().first;
        int cnt = qu.front().second;
        qu.pop();
        for(int i = 0; i < ve[cur].size(); i++){
            int nex = ve[cur][i];
            if(!ok[nex]&&cnt+1<3){
                qu.push(make_pair(nex, cnt+1));
                ok[nex] = true;
                ans++;
            }
        }
    }
    printf("%d", ans);
    
    return 0;
}