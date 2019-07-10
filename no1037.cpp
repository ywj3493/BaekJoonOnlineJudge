#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int mn = 1000001;
    int mx = 1;
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        if(temp>mx) mx = temp;
        if(temp<mn) mn = temp;
    }
    printf("%d", mx*mn);
    
    return 0;
}