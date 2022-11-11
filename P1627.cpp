//Created in Fri Nov 11 16:04:22 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int k, cnt, ans;
int main(){
    cin>>k;
    for (int i=1; i <= 2147483647; i++){
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
            cnt+=1;
        }
        if (cnt == k){
            cout<<i;
            return 0;
        }
    }
}