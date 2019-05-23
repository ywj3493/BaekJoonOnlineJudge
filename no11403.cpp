#include <iostream>
#include <queue>
using namespace std;

int c[100][100];
int ans[100][100];
int n;

void bfs(int sx){
    queue<int> qu;
    qu.push(sx);
    while(!qu.empty()){
        int cx = qu.front();
        for(int i = 0; i < n; i++){
            if(ans[sx][i]==0&&c[cx][i]==1){
                int nx = i;
                ans[sx][i] = 1;
                qu.push(nx);
            }
        }
        qu.pop();
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> c[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bfs(i);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}