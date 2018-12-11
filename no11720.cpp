#include <stdio.h>

int main(void){
    int N = 0;
    int num = 0;
    int sum = 0;
    int i, j;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%1d", &num);
        sum += num;
    }
    
    printf("%d",sum);
    
    return 0;
}