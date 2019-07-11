#include <cstdio>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n, x, y;
        scanf("%d %d %d %d", &m, &n, &x, &y);
        int snm = m > n ? n : m;
        int bnm = m > n ? m : n;
        int sxy = snm!=bnm ? (snm==m ? x : y) : x;
        int bxy = snm!=bnm ? (snm==m ? y : x) : y;
        int ac = 0;
        int answer = -1;
        int cnt = 0;
        int jud = bnm-snm+sxy;
        do{
            ac = ((snm*cnt)+sxy)%bnm;
            if(ac==0) ac = bnm;
            if(ac==bxy) answer = cnt*snm+sxy;
            cnt++;
        }while(ac!=jud);
        printf("%d\n", answer);
    }
    
    return 0;
}