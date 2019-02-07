#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[9] = { 0, };
int sum;
int notindex[2] = {0,};

void select_seven(){
    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            int sum = 0;
            for(int k = 0; k < 9; k++){
                if((k!=i)&&(k!=j)){
                    sum += arr[k];
                }
            }
            if(sum==100){
                notindex[0] = i;
                notindex[1] = j;
                return ;
            }
        }
    }
    return ;
}

int main(){
    for(int i = 0; i < 9; i++)
        scanf("%d", &arr[i]);
    
    select_seven();
    
    vector<int> ans;
    
    for(int i = 0; i < 9; i++){
        if((i != notindex[0])&&(i != notindex[1])){
            ans.push_back(arr[i]);
        }
    }
    
    sort(ans.begin(), ans.end());
    
    for(int i = 0; i < ans.size(); i++)
        printf("%d\n", ans[i]);
    
    return 0;
}