#include <iostream>
using namespace std;

int c[31][31];
int n, m;

int main(){
    int t;
    for(int i = 1; i <= 30; i++){
        c[1][i] = i;
    }
    for(int i = 2; i <= 30; i++){
        for(int j = i; j <= 30; j++){
            for(int k = 1; k <= j-i+1; k++){
                c[i][j] += c[i-1][j-k];
            }
        }
    }
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << c[n][m] << endl;
    }
    return 0;
}