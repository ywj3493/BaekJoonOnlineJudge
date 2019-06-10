#include <iostream>
using namespace std;

int dp[1001];
int box[1001];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> box[i];
    }
    int answer = 0;
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(box[j]<box[i]&&dp[i]<dp[j]+1){
                dp[i] = dp[j]+1;
            }
        }
        if(dp[i]>answer) answer = dp[i];
    }
    for(int i = 0; i < n; i++) cout << dp[i] << ' ';
    cout << answer;
    
    return 0;
}