#include <cstdio>

int recur(int a, int b){
    if(b==1) return a%10;
    int temp = recur(a,b/2);
    if(b%2==0) return temp*temp%10;
    else return temp*temp*a%10;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int answer = recur(a,b);
        if(answer==0) answer = 10;
        printf("%d\n", answer);
    }
    
    return 0;
}