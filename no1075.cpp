#include <iostream>

int main(void){
    int N, F;
    int cnt = 0;
    
    scanf("%d", &N);
    scanf("%d", &F);
    
    N /= 100;
    N *= 100;
    
    for (int i = 0; i < 100; i++){
        if(((N + i) % F == 0)&& F!=0){
            break;
        }
        cnt++;
    }
    
    if(cnt<10) printf("0");
    printf("%d", cnt);
    
}