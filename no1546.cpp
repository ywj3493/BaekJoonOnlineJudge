#include <iostream>

int main(){
    int n;
    scanf("%d", &n);
    double * c = new double[n];
    double mx = 0;
    for(int i = 0 ; i < n; i++){
        scanf("%lf", &c[i]);
        if(mx<c[i]) mx = c[i];
    }
    double mean = 0;
    for(int i = 0; i < n; i++){
        c[i] = c[i]*100/mx;
        mean += c[i];
    }
    mean/=n;
    printf("%lf", mean);
    delete c;
    return 0;
}