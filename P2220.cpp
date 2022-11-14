// Created in Sat Nov 12 16:27:34 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, n0, n5;
char in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in == '5'){
			n5 += 1;
		}else if (in == '0'){
			n0 += 1;
		}
	}
	if (n0 == 0){
		cout << -1;
		return 0;
	}
	if (n5 >= 9){
		for (int i=1; i <= n5 / 9 * 9; i++){
			cout << 5;
		}
		for (int i=1; i <= n0; i++){
			cout << 0;
		}
		return 0;
	}
	cout << 0;
}