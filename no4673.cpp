#include <cstdio>

bool c[10001];

void sel(int n){
    if(n>=10000) {
        return ;
    }
    int temp = n;
    int answer = n;
    while(temp){
        answer += temp%10;
        temp/=10;
    }
    c[answer] = true;
    sel(answer);
}

int main(){
    for(int i = 1; i <= 10000; i++){
        if(!c[i]) sel(i);
    }
    for(int i = 1; i <= 10000; i++){
        if(!c[i]) printf("%d\n", i);
    }
    return 0;
}