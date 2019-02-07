#include <iostream>

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

int main(void){
    int mat[501][501] = {0,};
    int n;
    
    int max = 0;
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            mat[i][j] += MAX(mat[i-1][j-1], mat[i-1][j]);
        }
    }
    
    for(int i = 0; i <= n; i++){
        if(max < mat[n][i]){
            max = mat[n][i];
        } 
    }
    
    printf("%d", max);
    
    return 0;
}