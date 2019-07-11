#include <iostream>
#include <string.h>
using namespace std;

char s[1000002];

int main(){
    scanf("%s", &s);
    int cnt[26] = {0, };
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        if(s[i]>='a'||s[i]<='z') cnt[s[i]-'a']++;
        if(s[i]>='A'||s[i]<='Z') cnt[s[i]-'A']++;
    }
    char answer = '0';
    int mx = 0;
    for(int i = 0; i < 26; i++){
        if(mx<cnt[i]) mx = cnt[i];
    }
    for(int i = 0; i < 26; i++){
        if(mx==cnt[i]){
            if(answer=='0') answer = i+'A';
            else answer = '?';
        }
    }
    printf("%c", answer);
    return 0;
}