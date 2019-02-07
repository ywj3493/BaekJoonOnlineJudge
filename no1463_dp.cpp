#include <iostream>
#include <algorithm>
using namespace std;
#define MIN(X, Y, Z) (X) < (Y) ? ((X) < (Z) ? (X) : (Z)) : ((Y) < (Z) ? (Y) : (Z))

int main(){
    int c[1000001] = {0, };
    int n; 
    
    scanf("%d", &n);
    
    c[1] = 0;
    c[2] = 1;
    c[3] = 1;
    
    for(int i = 4; i <= n; i++){
        if(i%3==0&&i%2==0){
            c[i] = MIN(c[i-1], c[i/3], c[i/2]) + 1;
        }
        else if(i%3==0){
            c[i] = min(c[i-1], c[i/3])+1;
        }
        else if(i%2==0){
            c[i] = min(c[i-1], c[i/2])+1;
        }else c[i] = c[i-1] +1;
    }
    
    printf("%d\n", c[n]);
    
    
    return 0;
}