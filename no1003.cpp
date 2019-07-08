#include <iostream>

int memo_z[41];
int memo_o[41];

int main(void){
    int T, n;
    scanf("%d", &T);
    memo_z[0] = 1;
    memo_o[0] = 0;
    memo_z[1] = 0;
    memo_o[1] = 1;
    for(int i = 2; i < 41; i++){
        memo_z[i] = memo_z[i-1]+memo_z[i-2];
        memo_o[i] = memo_o[i-1]+memo_o[i-2];
    }
    for(int i = 0; i < T; i++){
        scanf("%d", &n);
        printf("%d %d\n", memo_z[n], memo_o[n]);
    }
    
    return 0;
}