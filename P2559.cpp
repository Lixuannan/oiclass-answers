// Created in Sat Nov 12 16:27:38 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, in, a[101], m, ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		a[i] += in;
	}
	cin >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n - 1; j++){
			if (a[j] < a[j + 1]){
				swap(a[j], a[j+1]);
			}
		}
	}
	for (int i=1; i <= 100; i++){
		if (a[i] == m){
			cout << i;
			return 0;
		}
	}
}