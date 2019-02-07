#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    int check[100001] = {0,};
    int N, K;
    scanf("%d %d", &N, &K);
    
    queue<int> q;
    q.push(N);
    check[N] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        int nx = cur + 1;
        if(nx>=0&&nx<=100000){
            if(check[nx]==0){
                q.push(nx);
                check[nx] = check[cur]+1;
            }
        }
        nx = cur - 1;
        if(nx>=0&&nx<=100000){
            if(check[nx]==0){
                q.push(nx);
                check[nx] = check[cur]+1;
            }
        }
        nx = cur*2;
        if(nx>=0&&nx<=100000){
            if(check[nx]==0){
                q.push(nx);
                check[nx] = check[cur]+1;
            }
        }
        if(check[K]!=0) break;
    }
    
    printf("%d\n", check[K]-1);
    
    return 0;
}