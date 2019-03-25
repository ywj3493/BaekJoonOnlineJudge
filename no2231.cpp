#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= 1000000; i++){
        int temp = i;
        int cans = 0;
        while(temp>0){
            cans += temp % 10;
            temp /= 10;
        }
        cans += i;
        if(cans==n) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}