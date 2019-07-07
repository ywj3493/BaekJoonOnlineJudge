#include <iostream>
#define MAXIMUM 4001

int main(){
    int n;
    scanf("%d", &n);
    int answer = MAXIMUM;
    for(int i = 0; i <= 2000; i++)
        for(int j = 0; j <= 2000; j++)
            if(((5*i+3*j)==n)&&answer>(i+j)) answer = i+j;
    if(answer==MAXIMUM) printf("-1");
    else printf("%d", answer);
    
    return 0;
}