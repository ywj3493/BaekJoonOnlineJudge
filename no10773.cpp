#include <iostream>
#include <stack>
using namespace std;

int main(){
    int k;
    long long sum = 0;
    scanf("%d", &k);
    stack<int> st;
    for(int i = 0; i < k; i++){
        int temp;
        scanf("%d", &temp);
        if(!st.empty()&&temp==0){
            sum -= st.top();
            st.pop();
        }else {
            sum += temp;
            st.push(temp);
        }
        
    }
    
    printf("%lld", sum);
    return 0;
}