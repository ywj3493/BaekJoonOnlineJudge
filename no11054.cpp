#include <iostream>
using namespace std;

int a[1001];
int ar[1001];
int ci[1001];
int cd[1001];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        ar[i] = a[n-1-i];
    }
    int ans = -1;
    for(int i = 0; i < n; i++){
        int mxi = -1;
        int mxd = -1;
        ci[i] = 1;
        cd[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i]>a[j]){
                mxi = max(mxi, ci[j]);
            }
            if(ar[i]>ar[j]){
                mxd = max(mxd, cd[j]);
            }
        }
        if(mxi!=-1) ci[i] += mxi;
        if(mxd!=-1) cd[i] += mxd;
    }
    for(int i = 0; i < n; i++){
        ans = max(ans, ci[i]+cd[n-1-i]-1);
    }
    cout << ans << endl;
    
    return 0;
}