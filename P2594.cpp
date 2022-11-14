// Created in Sat Nov 12 16:27:22 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cstring>
using namespace std;
int n,m,opt,in,x,cnt;
int main() {
	cin>>n>>m;
	int a[n+100];
	memset(a, 0, sizeof(a));
	for (int i=1; i <= n; i++) {
		cin>>in;
		a[in] += 1;
	}
	for (int i=0; i<m; i++) {
		cin>>opt>>x;
		cnt = 0;
		if (opt == 1) {
			if (x <= n) a[x] -= 1;
			else continue;
		} else if (opt == 2) {
			if (x <= n) {
				cout<<a[x]<<endl;
			} else cout<<0<<endl;
		}
	}
}