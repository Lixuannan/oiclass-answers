//Created in Sat Nov 12 09:25:31 2022
 //System: Darwin 22.1.0
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