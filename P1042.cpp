//Created in Fri Nov 11 15:02:17 2022
#include<iostream>
#include<cmath>
using namespace std;
int l,r,n,cnt;
int main(){
    cin>>l>>r;
    for (int i=l; i <= r; i++){
        n = i;
        for (int ii=0; ii <= 5; ii++){
            if (n / (long long)pow(10, ii) % 10 == 2){
                cnt ++;
            }
        }
    }
    cout<<cnt;
}