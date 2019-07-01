#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        pq.push(temp);
    }
    int cnt = 0;
    int ans = 0;
    while(!pq.empty()){
        cnt++;
        int temp = pq.top()*cnt;
        if(ans<temp) ans = temp;
        pq.pop();
    }
    printf("%d", ans);
    
    return 0;
}