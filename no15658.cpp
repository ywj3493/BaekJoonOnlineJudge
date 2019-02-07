#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX(X, Y) (X) > (Y) ? (X) : (Y)
#define MIN(X, Y) (X) < (Y) ? (X) : (Y)

int mx=-1000000000;
int mn=1000000000;
int N;

void calc(vector<int> &a, int i, int cur, int sum, int sub, int mul, int dvd){
    int n = a.size();
    if(n==i){
        mx = MAX(cur, mx);
        mn = MIN(cur, mn);
        return ;
    }
    
    if(sum>0){
        calc(a, i+1, cur+a[i], sum-1, sub, mul, dvd);
    }
    if(sub>0){
        calc(a, i+1, cur-a[i], sum, sub-1, mul, dvd);
    }
    if(mul>0){
        calc(a, i+1, cur*a[i], sum, sub, mul-1, dvd);
    }
    if(dvd>0){
        calc(a, i+1, cur/a[i], sum, sub, mul, dvd-1);
    }
}

int main(){
    int op[4];
    scanf("%d", &N);
    
    vector<int> arr(N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 4; i++){
        scanf("%d", &op[i]);
    }
    
    calc(arr, 1, arr[0], op[0], op[1], op[2], op[3]);
    
    printf("%d\n%d\n", mx, mn);
    
    return 0;
}