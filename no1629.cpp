#include <cstdio>

long long recur(int a, int b, int c){
    if(b==0) return 1;
    long long temp = recur(a, b/2, c)%c;
    long long answer = (temp*temp)%c;
    if(b%2) answer = a*answer%c;
    return answer;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n", recur(a,b,c));
    return 0;
}