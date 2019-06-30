#include <iostream>
#include <vector>
using namespace std;

int blue;
int white;

void recur(int size, int sx, int sy, int **c){
    int cur = c[sx][sy];
    if(size==1) {
        if(cur) blue++;
        else white++;
        return ;
    }
    bool ok = true;
    for(int i = sx; i < sx+size; i++){
        for(int j = sy; j < sy+size; j++){
            if(i==sx&&j==sy) continue;
            if(cur!=c[i][j]) ok = false;
        }
    }
    if(ok) {
        if(cur) blue++;
        else white++;
        return ;
    }
    else {
        recur(size/2, sx, sy, c);
        recur(size/2, sx+size/2, sy+size/2, c);
        recur(size/2, sx, sy+size/2, c);
        recur(size/2, sx+size/2, sy, c);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int **c = new int*[n];
    for(int i = 0; i < n; i++){
        c[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &c[i][j]);
        }
    }
    recur(n, 0, 0, c);
    printf("%d\n%d", white, blue);
    for(int i = 0; i < n; i++){
        free(c[i]);
    }
    free(c);
    return 0;
}