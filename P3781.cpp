//Created in Sat Nov 12 09:25:55 2022
 //System: Darwin 22.1.0
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