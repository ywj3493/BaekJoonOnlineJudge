#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    deque<int> dqu;
    for(int i = 1; i <= n; i++){
        dqu.push_back(i);
    }
    int card;
    while(1){
        if(dqu.size()==1) {
            card = dqu.front();
            break;
        }
        dqu.pop_front();
        card = dqu.front();
        dqu.pop_front();
        dqu.push_back(card);
    }
    printf("%d", card);
    
    return 0;
}