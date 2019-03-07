#include <iostream>
#include <vector>
#include <stack>
#include <string.h>
using namespace std;

vector<int> ve[10001];
int c[10001];
bool d[10001];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        ve[y].push_back(x);
    }
    int mx = -1;
    stack<int> st;
    for(int i = 1; i <= n; i++){
        memset(d,false,sizeof(d));
        int cur = i;
        st.push(cur);
        while(!st.empty()){
            int cur = st.top();
            d[cur] = true;
            st.pop();
            c[i]++;
            for(int i = 0; i < ve[cur].size(); i++){
                int next = ve[cur][i];
                if(!d[next]){
                    st.push(next);
                    d[next] = true;
                }
            }
        }
        if(mx<c[i]) mx = c[i];
    }
    for(int i = 1; i <= n; i++){
        if(mx==c[i]) cout << i << ' ';
    }
    
    return 0;
}