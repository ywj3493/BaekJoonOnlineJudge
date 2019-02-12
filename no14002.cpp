#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int c[1001];
int idx[1001];

void printIdx(int x){
    if(x==-1){
        //printf("%d ", a[x]);
        return ;
    }
    printIdx(idx[x]);
    printf("%d ", a[x]);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    c[0] = 1;
    idx[0] = -1;
    for(int i = 1; i < n; i++){
        c[i] = 1;
        idx[i] = -1;
        int mx = -1;
        for(int j = 0; j < i; j++){
            if(a[i]>a[j]){
                mx = max(mx, c[j]);
            }
        }
        if(mx!=-1) c[i] += mx;
        for(int j = 0; j < n; j++)
            if(mx==c[j]) idx[i] = j;
    }
    int mx = -1;
    int index1;
    for(int i = 0; i < n; i++){
        mx = max(mx,c[i]);
        if(mx==c[i]) index1 = i;
    }
    printf("%d\n", mx);
    printIdx(index1);
    
    return 0;
}