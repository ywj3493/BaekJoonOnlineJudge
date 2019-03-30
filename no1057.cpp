#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n, small, big;
    scanf("%d %d %d", &n, &small, &big);
    
    if(small>big) {
        swap(small, big);
    }
    
    int r=1;
    while(1){
        if((big%2==0)&&(big-small==1)) break;
        if(n==0) {
            printf("%d", -1);
            return 0;
        }
        r++;
        if(n%2!=0){
            n = (n + 1) / 2; 
        }else {
            n = n / 2;
        }
        if(big%2!=0){
            big = (big + 1) / 2;
        }else {
            big = big / 2;
        }
        if(small%2!=0){
            small = (small + 1) / 2;
        }else {
            small = small / 2;
        }
        
    }
    printf("%d", r);
    
    
    return 0;
}