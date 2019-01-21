#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int k;
    while(1){
        scanf("%d", &k);
        if(k==0) break;
        
        vector<int> arr(k);
        vector<int> arr_s(k);
        
        for(int i = 0; i < k; i++){
            scanf("%d", &arr[i]);
            if(i<6) arr_s[i] = 1;
            else arr_s[i] = 2;
        }
        
        do{
            for(int i = 0; i < k; i++){
                if(arr_s[i]==1) printf("%d ", arr[i]);
            }
            printf("\n");
        }while(next_permutation(arr_s.begin(),arr_s.end()));
        printf("\n");
    }
    
    return 0;
}