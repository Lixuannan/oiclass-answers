// Created in Sat Nov 12 16:27:12 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int l, r, cnt;
bool p[100000000];
int main(){
	cin >> l >> r;
	p[0] = p[1] = true;
	for (int i = 2; i <= ceilf(sqrt(r)); i++) {
		if (!p[i]){
			for (int j = 2; j * i <= r; j++) {
				p[j * i] = true;
			}
		}
	}
	for (int i=l; i <= r; i++){
		cnt += !p[i];
	}
	cout << cnt;
}