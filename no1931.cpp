#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> ve;
    for(int i = 0; i < n; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        ve.push_back(make_pair(e,s));
    }
    sort(ve.begin(), ve.end());
    int cur = 0;
    int answer = 0;
    for(int i = 0; i < ve.size(); i++){
        if(ve[i].second>=cur) {
            cur = ve[i].first;
            answer++;
        }
    }
    printf("%d", answer);
    
    return 0;
}