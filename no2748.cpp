#include <iostream>

int main(void){
    int n;
    long long current, prior, next;
    
    scanf("%d", &n);
    
    prior = 0;
    current = 1;
    
    if(n==0){
        printf("%d", prior);
        return 0;
    }
    
    for(int i = 0; i < n-1; i++){
        next = prior + current;
        prior = current;
        current = next;
    }
    
    printf("%Ld", current);
    
    return 0;
}