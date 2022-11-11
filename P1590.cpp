//Created in Fri Nov 11 16:40:00 2022
 //System: Darwin 22.1.0
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