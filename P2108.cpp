// Created in Sat Nov 12 16:27:32 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int n, k, ptr;
bool p[9999999];
int main(){
	cin >> n;
	k = ptr = n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=2; i <= ceil(sqrt(2 * n)); i++){
		if (!p[i]){
			for (int j=2; i * j <= 2 * n; j++){
				p[i * j] = true;
			}
		}
	}
	while (p[k]){
		k += 1;
	}
	while (p[ptr]){
		ptr -= 1;
	}
	k -= ptr;
//	for (int i=1; i <= 2 * n; i++){
//		if (!p[i]) cout << i << endl;
//	}
	cout << k;
}