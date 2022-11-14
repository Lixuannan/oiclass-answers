// Created in Sat Nov 12 16:27:13 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, a[121], in, cnt;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cnt = 0;
		cin >> in;
		a[in] += 1;
		for (int j=in + 1; j <= 120; j++){
			cnt += a[j];
		}
		cout << cnt << " ";
	}
}