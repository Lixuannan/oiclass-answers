//Created in Sat Nov 12 11:58:48 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n,m,cnt;
int main(){
	cin>>n;
	int a[n];
	for (int i=0; i < n; i++){
		cin>>a[i];
	}
	cin>>m;
	for (int i=0; i < n; i++){
		if (a[i] == m) cnt++;
		else continue;
	}
	cout<<cnt;
}