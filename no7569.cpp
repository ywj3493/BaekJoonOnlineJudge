#include <queue>
#include <tuple>
#include <iostream>
using namespace std;

int arr[101][101][101];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 0, 0, 1, -1};
int dz[6] = {0, 0, 1, -1, 0, 0};

int main(){
    int m, n, h;
    cin >> m >> n >> h;
    queue<tuple<int, int, int>> qu;
    int cnt = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cin >> arr[i][j][k];
                if(arr[i][j][k]==1) qu.push(make_tuple(i,j,k));
            }
        }
    }
    while(!qu.empty()){
        int cx, cy, cz;
        tie(cx, cy, cz) = qu.front();
        qu.pop();
        for(int i = 0; i < 6; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            int nz = cz + dz[i];
            if(nx>=0&&nx<m&&ny>=0&&ny<n&&nz>=0&&nz<h&&arr[nz][ny][nx]==0){
                qu.push(make_tuple(nx,ny,nz));
                arr[nz][ny][nx] = arr[cz][cy][cx] + 1;
            }
        }
    }
    int mx = -1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(arr[i][j][k]==0) {
                    cout << -1 << endl;
                    return 0;
                }
                if(arr[i][j][k]>mx) mx = arr[i][j][k];
            }
        }
    }
    cout << mx-1 << endl;
    return 0;
}