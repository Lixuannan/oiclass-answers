//Created in Sat Nov 12 11:58:51 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
long long n,num,a[1000010];
int main() {
	cin>>n;
	for(long long  i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(long long i=-1; i<=n; i++) {
		if(a[i]>num+1) {
			cout<<num+1;
			return 0;
		}
		num+=a[i];
	}
	cout<<num+1;
	return 0;
}