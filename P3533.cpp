// Created in Sat Nov 12 16:27:46 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
// 代码如下
#include<iostream>
using namespace std;
int k;
int h,m,s;
int main(){
	cin>>k;
	h = k / 3600;
	m = k % 3600 / 60;
	s = k - h * 3600 - m * 60;
	if (h < 10) cout<<0<<h<<":";
	else cout<<h<<":";
	if (m < 10) cout<<0<<m<<":";
	else cout<<m<<":";
	if (s < 10) cout<<0<<s;
	else cout<<s<<endl;
}