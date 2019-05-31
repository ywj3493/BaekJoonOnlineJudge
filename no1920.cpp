#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ven;

int bs(int high, int low, int value){
    while(low<=high){
        int mid = (high+low)/2;
        if(ven[mid]<value){
            low = mid+1;
        }else if(ven[mid]>value){
            high = mid-1;
        }else{
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        ven.push_back(temp);
    }
    sort(ven.begin(), ven.end());
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int temp;
        scanf("%d", &temp);
        printf("%d\n", bs(ven.size()-1, 0, temp));
    }
    return 0;
}