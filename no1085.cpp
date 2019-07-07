#include <iostream>

int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int answer = 1001;
    if(answer>x) answer = x;
    if(answer>y) answer = y;
    if(answer>h-y) answer = h-y;
    if(answer>w-x) answer = w-x;
    printf("%d", answer);
    return 0;
}