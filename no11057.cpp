#include <iostream>

int c[1001][10];

int main(){
    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < 10; i++){
        c[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            for(int u = j; u >= 0; u--){
                c[i][j] += c[i-1][u] % 10007;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        ans += c[n][i];
    }
    printf("%d\n", ans%10007);
    
    
    
    return 0;
}