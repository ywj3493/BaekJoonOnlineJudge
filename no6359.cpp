#include <iostream>

int main(){
    int t;
    scanf("%d", &t);
    bool cnt[101] = {false,};
    for(int i = 1; i <= 100; i++){
        for(int j = i; j <= 100; j+=i){
            if(cnt[j]) cnt[j] = false;
            else cnt[j] = true;
        }
    }
    int memo[101] = {0,};
    memo[1] = 1;
    for(int i = 2; i <= 100; i++){
        if(cnt[i]) memo[i] = memo[i-1]+1;
        else memo[i] = memo[i-1];
    }
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", memo[n]);
    }
    
    return 0;
}