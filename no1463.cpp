#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int ch[1000001] = {0,};
    int n;
    scanf("%d", &n);
    
    queue<int> q;
    q.push(n);
    ch[n] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        int nx;
        if(x%3==0){
            nx = x/3;
            if(nx>=1&&ch[nx]==0){
                q.push(nx);
                ch[nx] = ch[x]+1;
            }
        }
        if(x%2==0){
            nx = x/ 2;
            if(nx>=1&&ch[nx]==0){
                q.push(nx);
                ch[nx] = ch[x]+1;
            }
        }
        nx = x - 1;
        if(nx>=1&&ch[nx]==0){
            q.push(nx);
            ch[nx] = ch[x]+1;
        }
    }
    
    printf("%d\n", ch[1]-1);
    
    
    return 0;
}