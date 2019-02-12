#include <iostream>
#include <iostream>
using namespace std;

int a[1001];
int c[1001];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = -1;
    for(int i = 0; i < n; i++){
        int mx = -1;
        c[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i]<a[j]){
                mx = max(mx, c[j]);
            }
        }
        if(mx!=-1) c[i] += mx;
        ans = max(c[i],ans);
    }
    
    cout << ans << endl;
    
    return 0;
}