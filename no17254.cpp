#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<tuple<int,int,char>> ve;
    for(int i = 0; i < m; i++){
        int a, b;
        char c;
        cin >> b >> a >> c;
        ve.push_back(make_tuple(a,b,c));
    }
    sort(ve.begin(), ve.end());
    for(int i = 0; i < m; i++){
        char thi;
        tie(ignore,ignore,thi) = ve[i];
        cout << thi;
    }
    
    return 0;
}