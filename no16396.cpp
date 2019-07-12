#include <cstdio>

bool c[10000];

int main(){
    int n;
    scanf("%d", &n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        for(int j = x; j < y; j++){
            c[j] = true;
        }
        if(y>mx) mx = y;
    }
    int answer = 0;
    for(int i = 1; i < mx; i++){
        if(c[i]) answer++;
    }
    printf("%d", answer);
    return 0;
}