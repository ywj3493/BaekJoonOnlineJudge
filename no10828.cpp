#include <iostream>
#include <string>
using namespace std;

class stack{
    int cur;
    int ss[10002];
    
    public:
    stack(){
        cur = 0;
        for(int i = 0; i < 10000; i++) ss[i] = -1;
    }
    void push(int x){
        ss[cur] = x;
        cur += 1;
    }
    int pop(){
        if(cur==0) {
            return -1;
        }
        int ret = ss[cur-1];
        ss[cur-1] = -1;
        cur -= 1;
        return ret;
    }
    int size(){
        return cur;
    }
    int empty(){
        if(cur==0) return 1;
        else return 0;
    }
    int top(){
        if(cur==0) {
            return -1;
        }
        return ss[cur-1];
    }
};

int main(){
    int n;
    scanf("%d", &n);
    stack st;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s=="push"){
            int x;
            cin >> x;
            st.push(x);
        }
        if(s=="top"){
            printf("%d\n", st.top());
        }
        if(s=="size"){
            printf("%d\n", st.size());
        }
        if(s=="empty"){
            printf("%d\n", st.empty());
        }
        if(s=="pop"){
            printf("%d\n", st.pop());
        }
    }
    
    return 0;
}