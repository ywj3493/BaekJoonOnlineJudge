#include <cstdio>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int h,w,n;
        scanf("%d %d %d", &h, &w, &n);
        int temp = n%h;
        int temp2 = n/h+1;
        if(temp==0) {
            temp = h;
            temp2--;
        }
        int answer = (temp)*100+temp2;
        printf("%d\n", answer);
    }
    
    return 0;
}