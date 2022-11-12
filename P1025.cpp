//Created in Sat Nov 12 11:58:31 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int r,n,a[202],p,ans;
using namespace std;
int main(){
	cin>>r>>n;
	for (int i=n; n>0; n--){
		cin>>a[i];
		p+=a[i];
		if (abs(p) <= r){
			ans += 1;
		}
	}
	cout<<ans;
}