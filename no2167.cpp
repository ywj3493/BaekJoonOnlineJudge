#include <iostream>

int ma[301][301];
int d[301][301];

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &ma[i][j]);
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + ma[i][j];
        }
    }
    int k;
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        int u, v, x, y;
        scanf("%d %d %d %d", &u, &v, &x, &y);
        printf("%d\n", d[x][y] - d[u-1][y] - d[x][v-1] + d[u-1][v-1]);
    }
    
    return 0;
}