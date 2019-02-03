#include <iostream>
#include <queue>
using namespace std;

int main(){
    int check[100001] = {0, };
    int N, K;
    scanf("%d %d", &N, &K);
    
    deque<int> q;
    q.push_back(N);
    check[N] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop_front();
        int next = cur * 2;
        if(next>=0&&next<100001){
            if(check[next]==0){
                q.push_front(next);
                check[next] = check[cur];
            }
        }
        next = cur + 1;
        if(next>=0&&next<100001){
            if(check[next]==0){
                q.push_back(next);
                check[next] = check[cur]+1;
            }
        }
        next = cur - 1;
        if(next>=0&&next<100001){
            if(check[next]==0){
                q.push_back(next);
                check[next] = check[cur]+1;
            }
        }
    }
    
    printf("%d ", check[K]-1);
    
    
    return 0;
}