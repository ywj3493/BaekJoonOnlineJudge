#include <iostream>

int main(){
    int t;
    int c[15][15] = {0, };
    for(int i = 1; i < 15; i++){
        c[0][i] = i;
    }
    for(int i = 1; i < 15; i++){
        for(int j = 1; j < 15; j++){
            for(int u = 1; u <= j; u++){
                c[i][j] += c[i-1][u];
            }
        }
    }
    scanf("%d", &t);
    while(t--){
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n", c[k][n]);
    }
    
    return 0;
}