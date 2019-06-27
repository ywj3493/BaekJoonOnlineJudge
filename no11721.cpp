#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int i;
    cin >> s;
    for(i = 0; i < s.size(); i++){
        printf("%c", s[i]);
        if((i+1)%10==0) printf("\n");
    }
    
    return 0;
}