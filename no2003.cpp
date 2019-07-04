#include <iostream>

int asum[10001];

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int temp;
        scanf("%d", &temp);
        sum += temp;
        asum[i] = sum;
    }
    int answer = 0;
    for(int i = 0; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(asum[j]-asum[i]==m) answer++;
        }
    }
    printf("%d", answer);
    return 0;
}