#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    stack<int> st;
    for(int i = 0; i <n; i++){
        int temp;
        cin >> temp;
        st.push(temp);
    }
    while(!st.empty()){
        int now = st.top();
        st.pop();
        while(k>=now){
            cnt++;
            k-=now;
        }
    }
    cout << cnt << endl;
    
    return 0;
}