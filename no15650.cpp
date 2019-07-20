#include <cstdio>

int answer[9];

void recur(int depth, int num, int n, int m){
    if(depth==m){
        answer[depth] = num;
        for(int i = 1; i <= m; i++) printf("%d ", answer[i]);
        printf("\n");
        return ;
    }
    answer[depth] = num;
    for(int i = num+1; i <= n; i++){
        if(answer[depth+1]==0){
            recur(depth+1, i, n, m);
            answer[depth+1] = 0;
        }
    }
    return ;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    recur(0, 0, n, m);
    
    return 0;
}