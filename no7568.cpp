#include <iostream>
using namespace std;

int man[51][2];
int c[51];

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int w, h;
        scanf("%d %d", &w, &h);
        man[i][0] = w;
        man[i][1] = h;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i!=j){
                if(man[i][0]<man[j][0]&&man[i][1]<man[j][1]){
                    c[i]++;
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", c[i]+1);
    }
    
    return 0;
}