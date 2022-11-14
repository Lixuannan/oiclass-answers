// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[102][102], b[102];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
		sort (a[i], a[i] + n + 1);
		b[i] = a[i][n / 2 + 1];
	}
	sort (b, b+ n + 1);
	cout << b[n / 2 + 1];
}