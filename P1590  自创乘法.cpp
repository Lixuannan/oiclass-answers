//Created in Fri Nov 11 10:52:14 2022
#include<iostream>
#include<cmath>
using namespace std;
int a,b,ans,t;
int main(){
    cin>>a>>b;
    for (int i=0; i <= 10; i++){
        t = a / (long long)pow(10, i) % 10;
        for (int ii=0; ii <= 10; ii++){
              ans += t * (b / (long long)pow(10, ii) % 10);
        }
    }
    cout<<ans;
}