#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int answer = 1;
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        answer+=temp;
    }
    printf("%d", answer-n);
    
    return 0;
}