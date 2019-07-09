#include <cstdio>

int main(){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int answer = 0;
    for(int i = 0; i <= k; i++){
        int j = k-i;
        int girls = n-i;
        int boys = m-j;
        int ret = girls/2 < boys ? girls/2 : boys;
        if(ret>answer) answer = ret;
    }
    printf("%d", answer);
    return 0;
}