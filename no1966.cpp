#include <iostream>
#include <deque>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, idx;
        int pop = -1;
        deque<pair<int,int>> dqu;
        int cnt = 0;
        bool ok = false;
        
        scanf("%d %d", &n, &idx);
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            dqu.push_back(make_pair(temp, i));
        }
        while(!ok){
            int p = dqu[0].first;
            int iidx = dqu[0].second;
            bool topop = true;
            for(int i = 1; i < dqu.size(); i++){
                if(p<dqu[i].first) topop = false;
            }
            if(topop){
                dqu.pop_front();
                cnt++;
                if(iidx==idx) ok = true;
            }else {
                dqu.pop_front();
                dqu.push_back(make_pair(p,iidx));
            }
        }
        printf("%d\n", cnt);
    }
    
    return 0;
}