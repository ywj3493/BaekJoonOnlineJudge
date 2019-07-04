#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int> qu;
    for(int i = 1; i <= n; i++){
        qu.push(i);
    }
    int cnt = 1;
    printf("<");
    while(1){
        if(qu.size()==1) {printf("%d", qu.front()); break;}
        if(cnt==k) {
            printf("%d, ", qu.front());
            qu.pop();
            cnt = 1;
        }else {
            int t = qu.front();
            qu.pop();
            qu.push(t);
            cnt++;
        }
    }
    printf(">");
    
    return 0;
}