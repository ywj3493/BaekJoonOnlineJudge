#include <iostream>
#include <string.h>
#include <string>
using namespace std;

bool c[26];

int main(){
    int n;
    int ans = 0;
    cin >> n;
    while(n--){
        memset(c,false,sizeof(c));
        string s;
        cin >> s;
        bool ok = true;
        if(s.size()!=1){
            c[s[0]-'a'] = true;
            for(int i = 1; i < s.size(); i++){
                int cidx = s[i] - 'a';
                int pidx = s[i-1] - 'a';
                if(pidx!=cidx&&c[cidx]) {
                    ok = false; 
                }
                c[cidx] = true;
            }
        }
        if(ok) ans++;
    }
    cout << ans;
    return 0;
}