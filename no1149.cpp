//RGB거리
#include <iostream>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(void){
    int N, min = 999999999;
    int calMat[1001][3] = {0, };
    
    scanf("%d", &N);
    
    for(int i = 1; i < N+1; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &calMat[i][j]);
            calMat[i][j] += MIN(calMat[i-1][(j+1)%3],calMat[i-1][(j+2)%3]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        min = (min > calMat[N][i]) ? calMat[N][i] : min;
    }
    
    printf("%d", min);
}
