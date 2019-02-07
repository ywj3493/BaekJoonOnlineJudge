#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[50] = {0,};
int current = 0;
int top = 0;
bool answer[1000] = {0,};

void push(int parent){
    if(current<50){
        arr[current] = parent;
        current++;
    }
}

void pop(){
    if(current>0){
        arr[current] = 0;
        current--;
    }
}

void isCorrect(){
    if(current >= 2){
        if(arr[current-1] == 2 && arr[current-2] == 1){
            pop();
            pop();
        }
    }
    
}


int main(void){
    int testN = 0;
    
    scanf("%d", &testN);
    
    char array[50] = {0,};
    
    for(int i = 0; i < testN; i++){
        scanf("%s", array);
        for(int j = 0; j < 50; j++){
            if(array[j] == '('){
                push(1);
            }else if(array[j] == ')'){
                push(2);
            }
            isCorrect();
        }
        if(current == 0) {
            answer[i] = 1;
        }else {
            answer[i] = 0;
        }
        memset(arr, 0, sizeof(arr));
        memset(array, 0, sizeof(array));
        current = 0;
        top = 0; 
    }
    

    for(int i = 0; i < testN; i++){
        if(answer[i]){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    return 0;
}