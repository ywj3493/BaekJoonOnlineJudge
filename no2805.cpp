#include <iostream>

long long c[1000001];

int main(){
    long long n, m;
    long long mx = -1;
    scanf("%lld %lld", &n, &m);
    for(long long i = 0; i < n; i++){
        scanf("%lld", &c[i]);
        if(mx<c[i]) mx = c[i];
    }
    long long lo = 0;
    long long hi = mx;
    long long ans = 0;
    while(lo<=hi){
        long long mid = (lo + hi) / 2;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long cut = c[i] - mid;
            if(cut>0) sum += cut;
        }
        if(sum>=m){
            if(ans<mid) ans = mid;
            lo = mid+1;
        }else {
            hi = mid-1;
        }
    }
    printf("%lld", ans);
    
    return 0;
}