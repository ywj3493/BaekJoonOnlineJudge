#include <iostream>
using namespace std;

long long d[101];

int main(){
    int t;
    cin >> t;
    d[1] = 1;
    d[2] = 1;
    d[3] = 1;
    d[4] = 2;
    d[5] = 2;
    d[6] = 3;
    d[7] = 4;
    d[8] = 5;
    for(int i = 9; i <= 100; i++){
        d[i] = d[i-1] + d[i-5];
    }
    while(t--){
        int n;
        cin >> n;
        cout << d[n] << endl;
    }
    
    return 0;
    
}