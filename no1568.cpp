#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 1;
    int cnt = 0;
    while(n){
        n -= k;
        k++;
        if(n<k){
            k=1;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}