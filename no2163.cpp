#include <iostream>
#include <math.h>
using namespace std;
int c[301][301];

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int mx = max(n, m);
    for(int i = 2; i <= mx; i++){
        c[i][1] = i - 1;
        c[1][i] = i - 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= m; j++){
            if(i>j){
                c[i][j] = c[i/2][j] + c[i/2+i%2][j] + 1;
            }else{
                c[i][j] = c[i][j/2] + c[i][j/2+j%2] + 1;
            }
        }
    }
    
    printf("%d\n", c[n][m]);
    return 0;
}