#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int answer = 0;
    int mul = 1;
    int cnt = 0;
    while((n/mul)!=0){
        mul*=10;
        cnt++;
    }
    mul/=10;
    answer += (n-mul+1)*cnt;
    int temp = 9;
    for(int i = 1; i < cnt; i++){
        answer += temp*i;
        temp *= 10;
    }
    printf("%d", answer);
    return 0;
}