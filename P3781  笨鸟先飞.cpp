//Created in Wed Nov  9 16:22:16 2022
#include "iostream"
using namespace std;
long long n,ans;
int main(){
    cin>>n;
    for (long long i=1; i <= n * 2; i += 2){
        ans += i;
    }
    cout<<ans<<endl;
}