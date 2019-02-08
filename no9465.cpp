#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int c[2][100001];
int d[3][100001];

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &c[0][i]);
        }
        for(int i = 1; i <= n; i++){
            scanf("%d", &c[1][i]);
        }
        d[0][1] = c[0][1];
        d[1][1] = c[1][1];
        d[2][1] = 0;
        for(int i = 2; i <= n; i++){
            d[0][i] = max(d[2][i-1],d[1][i-1]) + c[0][i];
            d[1][i] = max(d[2][i-1],d[0][i-1]) + c[1][i];
            d[2][i] = max(d[1][i-1],d[0][i-1]);
        }
        int mx = -1;
        mx = max(d[0][n],d[1][n]);
        mx = max(d[2][n],mx);
        printf("%d\n", mx);
        memset(c, 0, sizeof(c));
        memset(d, 0, sizeof(d));
    }
    
    return 0;
}