//Created in Fri Nov 11 10:52:26 2022
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