#include <iostream>

int main(){
    int arr[100000] = {0,};
    int n, s;
    scanf("%d %d", &n, &s);
    int f = 0;
    int d = 0;
    int sum = 0;
    int answer = 100001;
    for(int i = 0; i < n; i++){
        scanf("%d", arr+i);
        d++;
        sum += arr[i];
        while(sum>=s) {
            sum -= arr[f++];
            if(answer>d-f+1) answer = d-f+1;
        }
    }
    if(answer==100001) printf("0");
    else printf("%d", answer);
    return 0;
}