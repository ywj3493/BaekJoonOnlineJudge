#include <iostream>

int main(){
    int cx[1001] = {0, };
    int cy[1001] = {0, };
    for(int i = 0; i < 3; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        cx[x]++;
        cy[y]++;
    }
    int ax, ay;
    for(int i = 0; i < 1001; i++){
        if(cx[i]==1) ax = i;
        if(cy[i]==1) ay = i;
    }
    printf("%d %d", ax, ay);
    
    return 0;
}