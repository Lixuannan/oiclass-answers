//Created in Fri Nov 11 15:25:00 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long a,b,k,w,ans;
int main(){
    cin>>a>>b>>k;
    ans += a+b;
    for (int i=1; i <= k - 2; i++){
        w = a+b;
        // cout<<w<<endl;
        a = b;
        b = w;
        ans += w;
    }
    cout<<ans<<endl;
}