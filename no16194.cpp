#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int c[10001] = {0, };
    int ans[10001] = {0, };
    int n = 0;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &c[i]);
    }
    
    ans[1] = c[1];
    
    for(int i = 2; i <= n; i++){
        int temp = 2000000000;
        for(int j = 1; j <= i; j++){
            temp = min(ans[i-j] + c[j], temp);
        }
        ans[i] = temp;
    }

    printf("%d\n", ans[n]);
    
    
    return 0;
}