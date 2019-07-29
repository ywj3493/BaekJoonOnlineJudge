#include <cstdio>

int cnt[10001];

int main(){
    int n;scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        cnt[temp]++;
    }
    for(int i = 0; i <= 10000; i++){
        while(cnt[i]){
            printf("%d\n", i);
            cnt[i]--;
        }
    }
    return 0;
}