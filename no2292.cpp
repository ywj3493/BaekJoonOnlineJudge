#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    int answer = 1;
    int cur = 1;
    int next = 1;
    int mul = 6;
    while(!(cur<=n&&next>=n)){
        cur = next;
        next += mul;
        mul += 6;
        answer++;
    }
    printf("%d", answer);
    return 0;
}