//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int ans,n,m;
int main(){
	cin>>n>>m;
	for (int i=1; i<=min(n,m); i++){
		ans += (n - i + 1) * (m - i + 1);
	}
	cout<<ans<<endl;
}