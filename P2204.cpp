// Created in Sat Nov 12 16:27:34 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, a[9999][9999], s[9999][9999], cnt[252];
char ch;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> ch;
			a[i][j] = ch - '0';
			s[i][j] = s[i - 1][j] + s[i][j - 1]
			- s[i - 1][j - 1] + a[i][j];
		}
	}
	for (int k=2; k <= n; k++){
		for (int i=1; i <= n - k + 1; i++){
			for (int j=1; j <= n - k + 1; j++){
//				cout << k << " " << i << " " << j;
				int ii = i + k - 1, jj = j + k - 1;
				if (k * k ==
				s[ii][jj] - s[i - 1][jj]
				- s[ii][j - 1] + s[i - 1][j - 1]){
					cnt[k] += 1;
//					cout << "  YES" << endl;
//					continue;
				}
//				cout << "  NO" << endl;
			}
		}
	}
	for (int i=2; i <= n; i++){
		if (cnt[i]){
			cout << i << " " << cnt[i] << endl;
		}
	}
}