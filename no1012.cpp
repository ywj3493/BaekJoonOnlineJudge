#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

bool a[51][51];
int c[51][51];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(a, 0, sizeof(a));
        memset(c, 0, sizeof(c));
        int m , n , k;
        cin >> m >> n >> k;
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            a[x][y] = true;
        }
        stack<pair<int, int>> st;
        int ans = 0;
        int mx = -1;
        for(int i = 0 ; i < 51; i++){
            for(int j = 0; j < 51; j++){
                if(a[i][j]&&(c[i][j]==0)){
                    ans++;
                    st.push(make_pair(i, j));
                    c[i][j] = ans;
                    while(!st.empty()){
                        int cx = st.top().first;
                        int cy = st.top().second;
                        st.pop();
                        for(int u = 0; u < 4; u++){
                            int nx = cx + dx[u];
                            int ny = cy + dy[u];
                            if(a[nx][ny]&&!c[nx][ny]&&nx>=0&&ny>=0&&nx<m&&ny<n){
                                st.push(make_pair(nx,ny));
                                c[nx][ny] = ans;
                            }
                        }
                    }
                }
                if(mx<c[i][j]) mx = c[i][j];
            }
        }
        cout << mx << endl;
    }
    
    return 0;
}