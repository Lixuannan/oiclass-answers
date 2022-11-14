// Created in Sat Nov 12 16:27:24 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
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