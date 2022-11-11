//Created in Fri Nov 11 15:12:43 2022
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