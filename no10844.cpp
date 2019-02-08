#include <iostream>
using namespace std;

int main(){
    long long c[101][10] = {0,};
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 9; i++)
        c[1][i] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= 9; j++){
            if(j-1>=0) c[i][j] += c[i-1][j-1];
            if(j+1<=9) c[i][j] += c[i-1][j+1];
            c[i][j] %= 1000000000;
        }
    }
    long long ans = 0;
    for(int i = 0; i <= 9; i++){
        ans += c[n][i];
    }
    printf("%d\n", ans%1000000000);
    
    return 0;
}