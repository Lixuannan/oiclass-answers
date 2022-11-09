//Created in Wed Nov  9 16:22:08 2022
#include<iostream>
using namespace std;
long long x,ans=1;
int main(){
    cin>>x;
    while (x>0)
    {
        x -= ans;
        ans *= 2;
    }
    cout<<ans;
}