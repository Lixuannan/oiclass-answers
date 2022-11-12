//Created in Sat Nov 12 11:58:55 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, m, a[99999], opt, l, r, add;
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= m; i++){
		cin >> opt;
		if (opt == 1){
			cin >> l >> r >> add;
			for (int j=l; j <= r; j++){
				a[j] += add;
			}
		}else if (opt == 2){
			int sum = 0;
			cin >> l >> r;
			for (int j=l; j <= r; j++){
				sum += a[j];
			}
			cout << sum << endl;
		}else if (opt == 3){
			int maxn = 0;
			cin >> l >> r;
			for (int j=l; j <= r; j++){
				maxn = max(maxn, a[j]);
			}
			cout << maxn << endl;
		}
	}
}