#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int testN;
    scanf("%d", &testN);
    
    if(testN<1 || testN>1000){
        return 0;
    }
    
    int * arr;
    
    int inN;
    arr = (int *)malloc(sizeof(int)*testN);
    for(int i = 0; i < testN; i++){
        scanf("%d", &inN);
        if(inN<-1000 || inN>1000){
            return 0;
        }
        arr[i] = inN;
    }
    
    int temp;
    
    for(int i = 1; i < testN; i++){
        for(int j = 0; j < testN-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < testN; i++){
        printf("%d\n", arr[i]);
    }
}