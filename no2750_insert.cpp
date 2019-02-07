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
    
    int min;
    int temp = 0;
    
    min = arr[0];
    
    for (int i = 0; i < testN; i++){
        min = i;
        for (int j = i+1; j < testN; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(int i = 0; i < testN; i++){
        printf("%d\n", arr[i]);
    }
    free(arr);
    
    return 0;
}