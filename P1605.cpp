//Created in Fri Nov 11 14:56:20 2022
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