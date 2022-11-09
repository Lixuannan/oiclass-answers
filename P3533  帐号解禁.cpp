//Created in Wed Nov  9 16:22:09 2022
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