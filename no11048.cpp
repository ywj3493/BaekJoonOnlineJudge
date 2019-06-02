#include <iostream>
#include <math.h>
using namespace std;

int dx[3] = {1, 0, 1};
int dy[3] = {0, 1, 1};

int c[1001][1001];
int ans[1001][1001];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> c[i][j];
        }
    }
    ans[1][1] = c[1][1];
    int maxans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i==1&&j==1) continue;
            ans[i][j] += max(ans[i-1][j-1],max(ans[i-1][j],ans[i][j-1]))+c[i][j];
            if(ans[i][j]>maxans) maxans=ans[i][j];
        }
    }
    cout << maxans;
    return 0;
}