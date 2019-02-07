#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int testN = 0;
    int caseN = 0;
    
    scanf("%d",&testN);
    
    if(testN<1 || testN > 20){
        return 0;
    }else{
        bool arr[20] = {0,};
        
        for(int i = 0; i < testN; i++){
            scanf("%d", &caseN);
            if(caseN<1 || caseN>1000){
                return 0;
            }
            if(caseN*caseN%1000 == caseN){
                arr[i] = 1;
            }else if(caseN*caseN%100 == caseN){
                arr[i] = 1;
            }else if(caseN*caseN%10 == caseN){
                arr[i] = 1;
            }else{
                arr[i] = 0;
            }
        }
        for(int i = 0; i < testN; i++){
            if(arr[i]){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
        return 0;
    }
}