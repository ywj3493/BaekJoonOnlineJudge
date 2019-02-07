#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

int main(void){
    double R;
    double SE, SM;
    
    
    scanf("%lf", &R);
    
    SE = M_PI * R * R;
    SM = 2 * R * R;
    
    printf("%lf\n", SE);
    printf("%lf", SM);
    
    return 0;
}