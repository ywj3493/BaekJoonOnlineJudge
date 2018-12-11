#include <iostream>

int main(void){
    int N, k;
    int cnt = 2;
    int delNum = 0;
    int pivot;
    
    scanf("%d", &N);
    scanf("%d", &k);
    
    int *arr = new int[N-1];
    
    for(int i = 0; i < N-1; i++){
        arr[i] = cnt++;
    }
    
    
    for(int i = 0; i < N-1; i++){
        if(arr[i] != 0){
            pivot = arr[i];
            for(int j = i; j < N-1; j++){
                if((arr[j]%pivot == 0)&&(arr[j]!=0)&&(pivot!=0)){
                    delNum++;
                    if(delNum==k){
                        printf("%d", arr[j]);
                    }else{
                        arr[j] = 0;
                    }
                }
            }
            
        }
    }
    
    delete[] arr;
    
    
    return 0;
}