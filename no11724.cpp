#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int ans;
bool check[1001];

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> ve[n+1];
    for(int i = 0; i < m; i++){
        int in, out;
        cin >> in >> out;
        ve[in].push_back(out);
        ve[out].push_back(in);
    }
    
    queue<int> qu;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(check[i]) continue;
        ans++;
        qu.push(i);
        check[i] = true;
        while(!qu.empty()){
            int cur = qu.front();
            for(int j = 0; j < ve[cur].size(); j++){
                int next = ve[cur][j];
                if(!check[next]){
                    qu.push(next);
                    check[next] = true;
                }
            }
            qu.pop();
        }
    }
    
    cout << ans;
    return 0;
}