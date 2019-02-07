#include <iostream>

#define MAX(X, Y) ((X) > (Y)) ? (X) : (Y)

int main(void){
    int T;
    int set[6];
    int dist1, dist2;
    
    scanf("%d", &T);
    int *ans = (int *)malloc(sizeof(int)*T);
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 6; j++){
            scanf("%d", &set[j]);
        }
        dist1 = (set[0]-set[3])*(set[0]-set[3]) + (set[1]-set[4])*(set[1]-set[4]);
        
        if((dist1==0)&&(set[2]==set[5])){
            ans[i] = -1;
            continue;
        }
        
        if(dist1 < (MAX((set[2]*set[2]), (set[5]*set[5])))){
            dist2 = (set[2]-set[5])*(set[2]-set[5]);
            if(dist1==dist2){
                ans[i] = 1;
            }else if(dist1<dist2){
                ans[i] = 0;
            }else{
                ans[i] = 2;
            }
        }else{
            dist2 = (set[2]+set[5])*(set[2]+set[5]);
            if(dist1==dist2){
                ans[i] = 1;
            }else if(dist1<dist2){
                ans[i] = 2;
            }else{
                ans[i] = 0;
            }
        }
    }
    
    for(int i = 0; i < T; i++){
        printf("%d\n", ans[i]);
    }
    
    free(ans);
    
    return 0;
    
}
