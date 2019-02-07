#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
    int N = 0;
    int k = 0;
    int cnt = 0;

    scanf("%d", &N);
    scanf("%d", &k);
    
    int *arr;
    arr = (int *)malloc(sizeof(int)*N);
    
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    sort(&arr[0], &arr[N]);
    
    printf("%d", arr[k-1]);
    
    free(arr);
    
    return 0;
}