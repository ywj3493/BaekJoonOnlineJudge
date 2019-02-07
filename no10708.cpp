#include <iostream>

int main(void){
    int N, M, ans;
    scanf("%d", &N);
    scanf("%d", &M);
    
    int count[101] = {0,};
    int board[101] = {0,};
    
    
    for(int i = 0; i < M; i++){
        scanf("%d ", &board[i]);
    }
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &ans);
            if(board[i] != ans){
                count[board[i]-1]++;
            }else{
                count[j]++;
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}