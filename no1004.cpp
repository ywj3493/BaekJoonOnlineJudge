#include <iostream>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int n;
        scanf("%d", &n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            int cx, cy, r;
            scanf("%d %d %d", &cx, &cy, &r);
            bool ok1 = (x1-cx)*(x1-cx)+(y1-cy)*(y1-cy)<=r*r ? true : false;
            bool ok2 = (x2-cx)*(x2-cx)+(y2-cy)*(y2-cy)<=r*r ? true : false;
            if(ok1&&!ok2) ans++;
            if(ok2&&!ok1) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}