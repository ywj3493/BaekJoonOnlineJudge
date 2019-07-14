#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int> qu;
    for(int i = 1; i <= n; i++) qu.push(i);
    int cnt = 1;
    printf("<");
    while(!qu.empty()){
        int cur = qu.front();
        if(cnt==k) {
            if(qu.size()!=1){
                printf("%d, ", cur);
                qu.pop();
                cnt = 1;
            }else {
                printf("%d", cur);
                qu.pop();
            }
        }else {
            qu.pop();
            qu.push(cur);
            cnt++;
        }
    }
    printf(">");
    return 0;
}