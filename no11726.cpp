#include <iostream>

int count[1001] = {0, };

int cal(int n){
    int& temp = count[n];
    if(temp!=0) return temp;
    return temp = (cal(n-1) + cal(n-2))%10007;
}

int main(void){
    int n;
    scanf("%d", &n);
    
    count[1] = 1;
    count[2] = 2;
    
    cal(n);
    
    printf("%d", count[n]);
    
    return 0;
}