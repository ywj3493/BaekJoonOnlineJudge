#include <iostream>
using namespace std;

int main(){
    long long c[91][2] = {0,};
    c[1][0] = 0;
    c[1][1] = 1;
    int n;
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i++){
        c[i][0] += c[i-1][1]+c[i-1][0];
        c[i][1] += c[i-1][0];
    }
    long long ans = c[n][0]+c[n][1];
    cout << ans << endl;
    
    return 0;
}