#include <iostream>

int a[10001];

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    int s = 0;
    int e = 0;
    int answer = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
        e++;
        while(sum>m) sum -= a[s++]; 
        if(sum==m) answer++;
    }
    printf("%d", answer);
    return 0;
}