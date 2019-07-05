#include <iostream>

int card[100];
bool cc[100];
int check[3];

int select(int depth, int sum, int size, int limit){
    if(depth==3) {
        return sum;
    }
    int mx = -1;
    for(int i = 0; i < size; i++){
        if(cc[i]) continue;
        cc[i] = true;
        int subanswer = select(depth+1, sum+card[i], size, limit);
        cc[i] = false;
        if(subanswer>mx&&subanswer<=limit) mx = subanswer;
    }
    return mx;
    
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &card[i]);
    }
    printf("%d", select(0,0,n,m));
    
    return 0;
}