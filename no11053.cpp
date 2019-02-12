#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int c[1001];
int mx;

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    c[0] = 1;
    for(int i = 1; i < n; i++){
        c[i] = 1;
        int mx = -1;
        for(int j = 0; j < i; j++){
            if(a[i]>a[j]){
                mx = max(mx, c[j]);
            }
        }
        if(mx!=-1) c[i] += mx;
    }
    int mx = -1;
    for(int i = 0; i < n; i++){
        mx = max(mx,c[i]);
    }
    
    printf("%d\n", mx);
    
    return 0;
}