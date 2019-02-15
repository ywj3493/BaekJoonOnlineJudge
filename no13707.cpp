#include <iostream>
using namespace std;
long long c[5001][5001];
int main(){
    int n, k;
    cin >> n >> k;
    
    for(int i = 1; i <= k; i++){
        c[1][i] = i;
    }
    
    for(int i = 2; i <= n; i++){
        c[i][1] = 1;
        for(int j = 2; j <= k; j++){
            c[i][j] = (c[i][j-1] + c[i-1][j]) % 1000000000; 
        }
    }
    
    cout << c[n][k] << endl;
    
    return 0;
}