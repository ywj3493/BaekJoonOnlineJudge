#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int map[51][51];
int c[51][51];
int dx[8] = {1,-1,1,-1,0,0,1,-1};
int dy[8] = {1,-1,-1,1,1,-1,0,0};
int cnt;

void dfs(int x, int y){
    c[x][y] = cnt;
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0&&nx<=51&&ny>=0&&ny<=51){
            if(c[nx][ny]==0&&map[nx][ny]==1){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    while(1){
        int w, h;
        cin >> w >> h;
        if(w==0&&h==0){
            return 0;
        }
        memset(c, 0, sizeof(c));
        memset(map, 0, sizeof(map));
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> map[i][j];
            }
        }
        cnt = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(c[i][j]==0&&map[i][j]==1){
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}