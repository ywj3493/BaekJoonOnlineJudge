#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool c[100001];
int answer[100001];

int main(){
    int n;
    scanf("%d", &n);
    vector<int> ve[n+1];
    for(int i = 0; i < n-1; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        ve[x].push_back(y);
        ve[y].push_back(x);
    }
    queue<int> qu;
    qu.push(1);
    c[1] = true;
    while(!qu.empty()){
        int cur = qu.front();
        qu.pop();
        for(int i = 0; i < ve[cur].size(); i++){
            int nex = ve[cur][i];
            if(!c[nex]){
                qu.push(nex);
                answer[nex] = cur;
                c[nex] = true;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        printf("%d\n", answer[i]);
    }
    return 0;
}