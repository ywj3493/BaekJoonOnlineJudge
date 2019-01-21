#include <iostream>

int main(){
    int E, S, M;
    int year = 0;
    int e, s, m;
    
    scanf("%d", &E);
    scanf("%d", &S);
    scanf("%d", &M);
    
    
    while(1){
        year++;
        e++;
        s++;
        m++;
        if(e>=16) e = 1;
        if(s>=29) s = 1;
        if(m>=20) m = 1;
        if((e==E)&&(s==S)&&(m==M)) break;
    }
    
    printf("%d\n", year);
    
    return 0;
}