#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    int c[26];
    memset(c,-1,sizeof(c));
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        int cur = s[i]-'a';
        if(c[cur]==-1) c[cur] = i; 
    }
    for(int i = 0; i < 26; i++){
        cout << c[i] << ' ';
    }
    
    return 0;
}