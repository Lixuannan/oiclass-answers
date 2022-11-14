// Created in Sat Nov 12 16:27:46 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[999999], sum;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		sum += a[i] * (n - i);
	}
	cout << sum;
}