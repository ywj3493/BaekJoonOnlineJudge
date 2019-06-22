#include <iostream>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);
    int z = y*100/x;
    int lo = 0;
    int hi = x;
    int min = 1000000001;
    while(lo<=hi){
        int mid = (lo + hi) / 2;
        int ans = (y+mid)*100/(x+mid);
        if(ans<=z){
            lo = mid + 1;
        }else {
            if(mid<min) min = mid;
            hi = mid - 1;
        }
    }
    if(min==1000000001) printf("-1");
    else printf("%d", min);
    
    return 0;
}