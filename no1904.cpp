#include <iostream>

int memo[1000000];

int main(){
    int n;
    scanf("%d", &n);
    memo[0] = 1;
    memo[1] = 2;
    for(int i = 2; i < n; i++){
        memo[i] = (memo[i-2]+memo[i-1])%15746;
    }
    printf("%d", memo[n-1]%15746);
    
    return 0;
}