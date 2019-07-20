#include <cstdio>
#include <algorithm>
using namespace std;

int mem[8];
int answer[8];
bool c[8];

void recur(int depth, int n, int m){
    if(depth==m) {
        for(int i = 0; i < m; i++) printf("%d ", answer[i]);
        printf("\n");
        return ;
    }
    for(int i = 0; i < n; i++){
        if(!c[i]){
            c[i] = true;
            answer[depth] = mem[i];
            recur(depth+1, n, m);
            c[i] = false;
        }
    }
    return ;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &mem[i]);
    sort(mem, mem+n);
    recur(0, n, m);
    
    return 0;
}