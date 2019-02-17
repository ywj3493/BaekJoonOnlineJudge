#include <iostream>
using namespace std;

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

int step[301];
int c[2][301];

int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &step[i]);
    }
    
    c[0][1] = step[1];
    c[1][1] = 0;
    c[0][2] = step[2];
    c[1][2] = step[1]+step[2];
    for(int i = 3; i <= N; i++){
        c[1][i] += (c[0][i-1]+step[i]);
        c[0][i] += (MAX(c[1][i-2], c[0][i-2]) + step[i]);
    }
    
    int mx = MAX(c[1][N], c[0][N]);
    cout << mx << endl;
}