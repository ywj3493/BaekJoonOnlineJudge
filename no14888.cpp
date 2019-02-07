#include <iostream>
#include <vector>
#include <algorithm>

#define MIN(X, Y) (X) < (Y) ? (X) : (Y)
#define MAX(X, Y) (X) > (Y) ? (X) : (Y)

using namespace std;

int main(){
    int N, sum, sub, mul, dvd, ans;
    int max = -1000000000;
    int min = 1000000000;
    scanf("%d", &N);
    
    vector<int> arr(N);
    vector<int> op;
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d %d %d", &sum, &sub, &mul, &dvd);
    
    for(int i = 0; i < sum; i++){
        op.push_back(1);
    }
    for(int i = 0; i < sub; i++){
        op.push_back(2);
    }
    for(int i = 0; i < mul; i++){
        op.push_back(3);
    }
    for(int i = 0; i < dvd; i++){
        op.push_back(4);
    }
    
    do{
        ans = arr[0];
        for(int i = 0; i < N-1; i++){
            if(op[i]==1){
                ans += arr[i+1];
            }else if(op[i]==2){
                ans -= arr[i+1];
            }else if(op[i]==3){
                ans *= arr[i+1];
            }else if(op[i]==4){
                ans /= arr[i+1];
            }
        }
        min = MIN(min, ans);
        max = MAX(max, ans);
        
    }while(next_permutation(op.begin(), op.end()));
    
    printf("%d\n%d\n", max, min);
    
    return 0;
}