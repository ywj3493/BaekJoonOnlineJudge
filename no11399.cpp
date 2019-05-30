#include <iostream>
#include <algorithm>
using namespace std;

int c[1000];

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> c[i];
    }
    sort(c,c+n);
    int temp = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        temp += c[i];
        ans += temp;
    }
    cout << ans;
    return 0;
}