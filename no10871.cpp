#include <iostream>

int main(void){
    int N, X;
    
    scanf("%d", &N);
    scanf("%d", &X);
    
    int *arr = (int *)malloc(sizeof(int)*N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < N; i++){
        if(arr[i]<X){
            printf("%d ", arr[i]);
        }
    }
    
    free(arr);
    
    return 0;
}