#include <cstdio>

int answer[8];

void recur(int depth, int n, int m){
    if(depth==m){
        for(int i = 0; i < m; i++) printf("%d ", answer[i]);
        printf("\n");
        return ;
    }
    for(int i = 1; i <= n; i++){
        answer[depth] = i;
        recur(depth+1, n, m);
    }
    return ;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    recur(0, n, m);
    
    return 0;
}