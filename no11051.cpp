//이항계수2
#include <iostream>

int binoMat[1001][1001] = {0,};

int binoCo(int n, int k){
    if(n<0||k<0){
        return 0;
    }
    if(n==1||n==k){
        binoMat[n][k] = 1;
        
        return binoMat[n][k];
    }
    if(binoMat[n][k]!=0){
        return binoMat[n][k];
    }
    
    return binoMat[n][k] = (binoCo(n-1, k-1) + binoCo(n-1, k))%10007;
}

int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d",binoCo(n,k));
    
    return 0;
}