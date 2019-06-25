#include <iostream>

int c[101][4];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &c[i][0], &c[i][1], &c[i][2]);
    }
    int ans = 0;
    for(int i = 100; i < 1000; i++){
        int _100 = (i/100)%10;
        int _10 = (i/10)%10;
        int _1 = i%10;
        if(_100==_10||_10==_1||_1==_100||_100==0||_10==0||_1==0) continue;
        bool ok = true;
        for(int j = 0; j < n; j++){
            int s = 0;
            int b = 0;
            int c_100 =(c[j][0]/100)%10;
            int c_10 = (c[j][0]/10)%10;
            int c_1 = c[j][0]%10;
            if(c_100==_100) s++;
            else if(c_100==_10||c_100==_1) b++;
            if(c_10==_10) s++;
            else if(c_10==_1||c_10==_100) b++;
            if(c_1==_1) s++;
            else if(c_1==_10||c_1==_100) b++;
            if(!(c[j][1]==s&&c[j][2]==b)) ok = false;
        }
        if(ok) ans++;
    }
    printf("%d", ans);
    
    return 0;
}