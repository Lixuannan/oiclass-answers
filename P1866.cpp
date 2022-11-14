// Created in Sat Nov 12 16:27:29 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
unsigned short p, q, n, cnt;
int main(){
	cin >> p >> q;
	n = p & q;
	for (int i=1; i <= 8; i++){
		if (n & 1){
			cout << i << " ";
			cnt += 1;
		}
		n >>= 1;
	}
	if (cnt >= 2){
		cout << endl << "Yes";
	}else if (cnt == 1){
		cout << endl << "NO";
	}else{
		cout << "0" << endl << "NO";
	}
}