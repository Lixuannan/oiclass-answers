//Created in Wed Nov  9 16:22:05 2022
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