//Created in Sat Nov 12 11:58:45 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int t,a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d;
	t = (c * 60 + d) - (a * 60 + b);
	e = t / 60;
	f = t - e * 60;
	cout<<e<<" "<<f;
}