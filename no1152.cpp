#include <cstdio>

int main(){
    char s[1000001] = {0,};
    scanf("%[^\n]", s);
    int answer = 0;
    bool word = false;
    for(int i = 0; s[i]!=0; i++){
        if((s[i]!=' ')&&!word) {word = true; answer++;}
        if(s[i]==' ') word = false;
    }
    printf("%d", answer);
    return 0;
}