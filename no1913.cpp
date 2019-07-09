#include <iostream>

int main(){
    int n, f;
    scanf("%d", &n);
    scanf("%d", &f);
    int **c = new int *[n];
    for(int i = 0; i < n; i++) c[i] = new int[n];
    
    int cnt = n*n;
    int ansx = 0;
    int ansy = 0;
    int cx = 0;
    int cy = 0;
    c[cx][cy] = cnt;
    while(cnt!=1){
        while(cx+1<n&&c[cx+1][cy]==0) {
            c[++cx][cy] = --cnt;
            if(cnt==f) { ansx = cx; ansy = cy; }
            if(!cnt) break;
        }
        while(cy+1<n&&c[cx][cy+1]==0) {
            c[cx][++cy] = --cnt;
            if(cnt==f) { ansx = cx; ansy = cy; }
            if(!cnt) break;
        }
        while(cx-1>=0&&c[cx-1][cy]==0) {
            c[--cx][cy] = --cnt;
            if(cnt==f) { ansx = cx; ansy = cy; }
            if(!cnt) break;
        }
        while(cy-1>=0&&c[cx][cy-1]==0) {
            c[cx][--cy] = --cnt;
            if(cnt==f) { ansx = cx; ansy = cy; }
            if(!cnt) break;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("%d %d", ansx+1, ansy+1);
    for(int i = 0; i < n; i++) delete c[i];
    delete c;
    
    return 0;
}