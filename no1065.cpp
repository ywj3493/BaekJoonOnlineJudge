#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        bool ok = true;
        int temp = i;
        int diff = temp%10 - (temp/10)%10;
        while(temp>=10){
            int cur = temp%10;
            temp = temp/10;
            int nc = temp%10;
            if(cur-nc!=diff){
                ok = false;
                break;
            }
        }
        if(ok){
            cnt++;
        }
    }
    printf("%d", cnt);
           
    
    return 0;
}