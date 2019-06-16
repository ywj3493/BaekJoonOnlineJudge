#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int cur = n;
    int nex = 0;
    int ans = -1;
    while(1){
        if(n==ans) break;
        cnt++;
        nex = cur%10 + cur/10;
        ans = (cur%10)*10 + nex%10;
        cur = ans;
    }
    printf("%d", cnt);
    return 0;
}