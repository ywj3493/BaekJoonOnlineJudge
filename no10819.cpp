#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX(X, Y) (X) > (Y) ? (X) : (Y)

int main(){
    int N, temp;
    int max = 0;
    scanf("%d", &N);
    
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    sort(arr.begin(), arr.end());
    
    do{
        temp = 0;
        for(int i = 1; i < arr.size(); i++){
            temp += abs(arr[i]-arr[i-1]);
        }
        max = MAX(max, temp);
    }while(next_permutation(arr.begin(), arr.end()));
    
    printf("%d", max);
    
    return 0;
}