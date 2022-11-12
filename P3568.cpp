//Created in Sat Nov 12 11:59:04 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long n,ans,ans1;
int main(){
	cin>>n;
	ans = 1;
	ans1 = 3;
	for (int i=2; i <= n; i++){
		ans += i * 2 - 1;
		ans1 += i * 3;
	}
	cout<<ans<<"\n"<<ans1<<endl;
}