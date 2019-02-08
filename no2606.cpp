#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool c[101];
vector<int> v[101];

int main(){
    int n=0;
    int e=0;
    int cnt = 0;
    scanf("%d", &n);
    scanf("%d", &e);
    for(int i = 0; i < e; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    queue<int> q;
    q.push(1);
    c[1] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i = 0; i < v[cur].size(); i++){
            int temp = v[cur][i];
            if(c[temp]==false) {
                q.push(temp);
                c[temp]=true;
                cnt++;
            }
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}