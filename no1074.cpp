#include <iostream>

int cnt = 0;

void writeZ(int x, int y, int n){
    if(n==2){
        if(x==0&&y==0){
            cnt+=0;
        }else if(x==0&&y==1){
            cnt+=1;
        }else if(x==1&&y==0){
            cnt+=2;
        }else if(x==1&&y==1){
            cnt+=3;
        }
        
        return ;
    }else{
        n /= 2;
        
        if(x>=n&&y>=n){
            cnt += 3*n*n;
            writeZ(x-n, y-n, n);
        }
        if(x>=n&&y<n){
            cnt += 2*n*n;
            writeZ(x-n, y, n);
        }
        if(x<n&&y>=n){
            cnt += n*n;
            writeZ(x, y-n, n);
        }
        if(x<n&&y<n){
            writeZ(x, y, n);
        }
        
        return ;
    }
}



int main(void){
    int N, r, c;
    int n = 1;

    scanf("%d", &N);
    scanf("%d %d", &r, &c);
    
    n = n << N;
    
    writeZ(r, c, n);
    
    printf("%d", cnt);

    
    return 0;    
}