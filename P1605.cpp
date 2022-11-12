//Created in Sat Nov 12 08:44:54 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	long long x,n,ans=1;
	cin>>x>>n;
	for (int i=n; i>0; i--){
		ans += ans*x;
	}
	cout<<ans;
}