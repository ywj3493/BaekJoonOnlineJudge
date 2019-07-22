#include <cstdio>
#include <algorithm>

int mem[8];
int answer[8];

void recur(int depth, int select, int n, int m){
    if(depth==m){
        for(int i = 0; i < m; i++) printf("%d ", answer[i]);
        printf("\n");
        return;
    }
    for(int i = select; i < n; i++){
        if(answer[depth]==0){
            answer[depth] = mem[i];
            recur(depth+1, i, n, m);
            answer[depth] = 0;
        }
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &mem[i]);
    std::sort(mem, mem+n);
    recur(0, 0, n, m);
    return 0;
}