#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> ve[101];
bool c[101];
int n;
int x, y;
int ans = -1;

void dfs(int cur, int depth){
    if(cur==y){
        ans = depth;
        return ;
    }
    c[cur] = true;
    for(int i = 0; i < ve[cur].size(); i++){
        if(!c[ve[cur][i]]) dfs(ve[cur][i], depth+1);
    }
}

int main(){
    cin >> n;
    cin >> x >> y;
    int m;
    cin >> m;
    for(int i =0; i < m; i++){
        int tx, ty;
        cin >> tx >> ty;
        ve[tx].push_back(ty);
        ve[ty].push_back(tx);
    }
    dfs(x,0);
    cout << ans;
    
    return 0;
}