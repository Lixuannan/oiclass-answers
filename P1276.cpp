// Created in Sat Nov 12 16:27:21 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int a[9999999], c[9999999], n, k, ain, b;
int main(){
	cin >> n >> k;
	for (int i=1; i <= k; i++){
		cin >> ain >> b;
		c[ain] += 1;
		c[b + 1] -= 1;
	}
	for (int i=1; i <= n; i++){
		a[i] = a[i - 1] + c[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[n / 2 + 1];
}