// Created in Sat Nov 12 16:27:37 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
long long n, in, x, y, cnt;
int main(){
	cin >> n >> x >> y;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in >= x && in <= y){
			cnt += 1;
		}
	}
	cout << cnt;
}