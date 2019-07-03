#include <iostream>

int main(){
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int check = (v-a)%(a-b);
    if(check==0) printf("%d", (v-a)/(a-b)+1);
    else printf("%d", (v-a)/(a-b)+2);
    return 0;
}