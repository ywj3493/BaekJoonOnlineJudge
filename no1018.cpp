#include <iostream>
using namespace std;

char c[51][51];
int n, m;

int check(int sx, int sy){
    int ansB = 0;
    int ansW = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            int nx = sx+i;
            int ny = sy+j;
            if(nx<n&&ny<m){
                if((i+j)%2==1&&c[nx][ny]=='B'){
                    ansB++;
                }
                if((i+j)%2==0&&c[nx][ny]=='W'){
                    ansB++;
                }
                if((i+j)%2==1&&c[nx][ny]=='W'){
                    ansW++;
                }
                if((i+j)%2==0&&c[nx][ny]=='B'){
                    ansW++;
                }
            }
        }
    }
    int ans = ansW < ansB ? ansW : ansB;
    return ans;
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    int answer = 250;
    for(int i = 0; i < n-7; i++){
        for(int j = 0; j < m-7; j++){
            int subans = check(i,j);
            if(subans<answer) answer = subans;
        }
    }
    printf("%d", answer);
    
    return 0;
}