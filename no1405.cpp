#include <iostream>
#include <string.h>
using namespace std;

bool c[29][29]; //14, 14
int n;
double p[4];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
double answer;

void dfs(int depth, int x, int y, double ans){
    if(depth==n){
        answer += ans;
        return ;
    }
    c[y][x] = true;
    for(int i = 0; i < 4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        double nans = ans*p[i];
        if(!c[ny][nx]) {
            dfs(depth+1, nx, ny, nans);
        }
    }
    c[y][x] = false;
}


int main(){
    cin >> n;
    for(int i = 0; i < 4; i++) {
        cin >> p[i];
        p[i] /= 100;
    }
    dfs(0,14,14,1);
    printf("%.9f", answer);
    
    return 0;
}