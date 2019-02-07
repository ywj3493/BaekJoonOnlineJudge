//이항계수1
#include <iostream>

int binoCo(int n, int k){
    if(n<0||k<0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==k){
        return 1;
    }
    
    return binoCo(n-1, k-1) + binoCo(n-1, k);
}

int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d",binoCo(n,k));
    
    return 0;
}