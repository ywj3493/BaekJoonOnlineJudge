#include <iostream>

int mat[1000001] = {0,};

int main(){
    int M, N;
    
    scanf("%d %d", &M, &N);
    
    for(int i = 2; i <= N; i++){
        mat[i] = i;
    }
    
    
    for(int i = 2; i <= N; i++){
        if(mat[i]!=-1){        
            for(int j = i*2; j <= N; j+=i){
                mat[j] = -1;
            }
        }
    }
    
    for(int i = 0; i <= N; i++){
        if(mat[i]>=M&&mat[i]<=N) 
            printf("%d\n", mat[i]);
    }
    
    
    return 0;
}