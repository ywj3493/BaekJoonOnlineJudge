#include <iostream>
#include <queue>
#include <string.h>

int c[1000001];

int main(){
    int f, s, g, u, d;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
    memset(c,-1,sizeof(c));
    std::queue<int> qu;
    qu.push(s);
    c[s] = 0;
    int ans = 0;
    while(!qu.empty()){
        int cur = qu.front();
        qu.pop();
        int nex = cur + u;
        if(nex>=1&&nex<=f&&c[nex]==-1){
            qu.push(nex);
            c[nex] = c[cur]+1;
        }
        nex = cur - d;
        if(nex>=1&&nex<=f&&c[nex]==-1){
            qu.push(nex);
            c[nex] = c[cur]+1;
        }
    }
    if(c[g]!=-1) printf("%d", c[g]);
    else printf("use the stairs");
    return 0;
}