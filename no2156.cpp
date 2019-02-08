#include <iostream>
#include <algorithm>
using namespace std;

int wine[10001];
int d[3][10001];

int main(void){
    int n;
    int arm = 0;
    scanf("%d\n", &n);
    
    for(int i = 1; i <= n; i++){
        scanf("%d", &wine[i]);
    }
    
    d[0][1] = 0;
    d[1][1] = wine[1];
    d[2][1] = 0;
    for(int i = 2; i <=n; i++){
        d[0][i] += max(d[0][i-1], max(d[2][i-1], d[1][i-1]));
        d[1][i] += d[0][i-1] + wine[i];
        d[2][i] += d[1][i-1] + wine[i];
    }
    int mx = -1;
    mx = max(d[0][n],d[1][n]);
    mx = max(d[2][n],mx);
    printf("%d\n", mx);
    
    return 0;
}