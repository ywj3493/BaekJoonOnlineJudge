#include <iostream>
#include <algorithm>
#include <vector>

#define MIN(X,Y) (X) < (Y) ? (X) : (Y)

using namespace std;

int W[11][11] = { 0, };

int main(){
    int N, temp;
    scanf("%d", &N);
    int min = 999999999;
    bool route;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &W[j][i]);
        }
    }
    
    vector<int> seq(N);
    for(int i = 0; i < seq.size(); i++){
        seq[i] = i;
    }
    
    do{
        temp = 0;
        route = true;
        for(int i = 1; i < seq.size(); i++){
            if(W[seq[i-1]][seq[i]]!=0) temp += W[seq[i-1]][seq[i]];
            else {
                route = false;
                break;
            }
        }
        if(route&&W[seq[N-1]][seq[0]]!=0) {
            temp += W[seq[N-1]][seq[0]];
            min = MIN(temp, min);
        }
    }while(next_permutation(seq.begin(), seq.end()));
    
    printf("%d", min);
    
    return 0;
}