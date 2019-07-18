#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int answer = 0;
    for(int i = 1; i <= n; i++){
        if(i>=1&&i<=9) answer+=1;
        else if(i>=10&&i<=99) answer+=2;
        else if(i>=100&&i<=999) answer+=3;
        else if(i>=1000&&i<=9999) answer+=4;
        else if(i>=10000&&i<=99999) answer+=5;
        else if(i>=100000&&i<=999999) answer+=6;
        else if(i>=1000000&&i<=9999999) answer+=7;
        else if(i>=10000000&&i<=99999999) answer+=8;
        else answer+=9;
    }
    
    printf("%d", answer);
    return 0;
}