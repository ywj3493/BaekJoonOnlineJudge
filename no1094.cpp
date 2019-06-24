#include <iostream>

int c[65];

int main(){
    int x;
    scanf("%d", &x);
    int cnt = 1;
    c[1] = 64;
    while(1){
        int sum = 0;
        for(int i = 0; i <= cnt; i++){
            sum += c[i];
        }
        if(sum>x){
            c[cnt] /= 2;
            cnt++;
            c[cnt] = c[cnt-1];
            sum -= c[cnt];
            if(sum>=x) {
                c[cnt] = 0;
                cnt--;
            }
        } else break;
    }
    printf("%d", cnt);
    
    return 0;
}