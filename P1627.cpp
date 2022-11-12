//Created in Sat Nov 12 11:58:46 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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