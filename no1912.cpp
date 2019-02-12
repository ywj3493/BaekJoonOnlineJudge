#include <iostream>
using namespace std;

int a[100001];
int c[100001];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    c[0] = a[0];
    for(int i = 1; i < n; i++){
        c[i] = a[i];
        if(c[i-1]+a[i] > c[i]){
            c[i] = c[i-1] + a[i];
        }
    }
    int mx = -2000000000;
    for(int i = 0; i < n; i++){
        if(mx<c[i]) mx = c[i]; 
    }
    
    cout << mx << endl;
    
    return 0;
}