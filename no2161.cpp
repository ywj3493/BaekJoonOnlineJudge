#include <cstdio>
#include <queue>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    deque<int> dq;
    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }
    while(!dq.empty()){
        printf("%d ", dq.front());
        dq.pop_front();
        int top = dq.front();
        dq.pop_front();
        dq.push_back(top);
    }
    return 0;
}