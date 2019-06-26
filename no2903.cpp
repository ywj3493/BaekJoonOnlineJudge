#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    int ans = 2;
    int _2pow = 1;
    for(int i = 1; i <= n; i++){
        ans += _2pow;
        _2pow *= 2;
    }
    ans *= ans;
    printf("%d", ans);
    
    return 0;
}