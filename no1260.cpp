#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int cur){
    printf("%d ", cur);
    check[cur] = true;
    for(int i = 0; i < a[cur].size(); i++){
        int temp = a[cur][i];
        if(check[temp]==false){
            dfs(temp);
        }
    }
}


void bfs(int cur){
    queue<int> q;
    memset(check, false, sizeof(check));
    q.push(cur);
    printf("%d ", cur);
    check[cur] = true;
    while(!q.empty()){
        int x = q.front();
        for(int i = 0; i < a[x].size(); i++){
            int temp = a[x][i];
            if(check[temp]==false){
                q.push(temp);
                printf("%d ", temp);
                check[temp] = true;
            }
        }
        q.pop();
    }
}

int main(){
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);
    
    for(int i = 0; i < M; i++){
        int u, v;
        scanf("%d %d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    for(int i = 1; i <= N; i++){
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(V);
    printf("\n");
    bfs(V);
    
    return 0;
}