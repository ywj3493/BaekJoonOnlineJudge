#include <iostream>

using namespace std;

int cnt = 0;
int arr[20] = {0,};
int N, S;

void calc(int index, int sum){
    if(index == N){
        if(sum == S){
            cnt+=1;
        }
        return;
    }
    //if(index>=N) return;
    calc(index+1, sum+arr[index]);
    calc(index+1, sum);
}

int main(){
    scanf("%d %d", &N, &S);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    
    calc(0,0);
    if(S==0) cnt-=1;
    printf("%d\n", cnt);
    
    return 0;
}