#include <iostream>
using namespace std;

int main(){
    int t;
    int n;
    long long c[1000001] = {0, };
    scanf("%d", &t);
    
    c[1] = 1;
    c[2] = 2;
    c[3] = 4;
    for(int i = 4; i <= 1000000; i++){
            c[i] = (c[i-1] + c[i-2] + c[i-3])%1000000009;
    }
    while(t--){
        scanf("%d", &n);
        printf("%ld\n", c[n]);
    }
    
    
    return 0;
}