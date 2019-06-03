#include <iostream>
using namespace std;

int c[10];

int main(){
    int n;
    cin >> n;
    int ans = 0;
    if(n==0) {
        cout << 1;
        return 0;
    }
    while(n){
        int temp = n%10;
        if(temp==6||temp==9) temp=9;
        c[temp]++;
        n/=10;
    }
    c[9] = (c[9]+1)/2;
    for(int i = 0; i < 10; i++){
        if(ans<c[i]) ans=c[i];
    }
    cout << ans;
    
    return 0;
}