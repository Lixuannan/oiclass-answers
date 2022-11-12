//Created in Sat Nov 12 08:45:36 2022
 //System: Darwin 22.1.0
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