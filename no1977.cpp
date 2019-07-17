#include <cstdio>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int mn = 10001;
    int sum = 0;
    for(int i = 1; i*i <= n; i++){
        int temp = i*i;
        if(temp>=m&&temp<=n){
            if(temp<mn) mn = temp;
            sum += temp;
        }
    }
    if(sum!=0) printf("%d\n%d", sum, mn);
    else printf("-1");
    return 0;
}