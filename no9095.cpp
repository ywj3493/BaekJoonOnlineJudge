#include <iostream>

int main(void){
    int arr[10] = { 1, 2, 4, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 3; i < 10; i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    
    int T;
    scanf("%d", &T);
    int *n = (int *)malloc(sizeof(int)*T);
    for(int i = 0; i < T; i++){
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < T; i++){
        printf("%d\n", arr[n[i]-1]);
    }
    
    return 0;
}