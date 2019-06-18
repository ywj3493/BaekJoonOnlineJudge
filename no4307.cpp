#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int length, n;
        scanf("%d %d", &length, &n);
        int mn = 0;
        int mx = 0;
        for(int i = 0; i < n; i++){
            int c;
            scanf("%d", &c);
            int left = c;
            int right = length - c;
            int mnans = left < right ? left : right;
            int mxans = left < right ? right : left;
            if(mn<mnans) mn = mnans;
            if(mx<mxans) mx = mxans;
        }
        printf("%d %d\n", mn, mx);
    }
    
    return 0;
}