// Created in Sat Nov 12 16:27:27 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, r, m, ans;
int a[99999999], b[99999999];
int main(){
	cin >> n >> r;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		sort(b + 1, b + r + 1);
		ans += a[i] + b[1];
		b[1] += a[i];
	}
	cout << ans;
}