// Created in Sat Nov 12 16:27:36 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
unsigned long long n, ans;
int main(){
	cin >> n;
	if (n % 4 == 1){
		ans = 1;
	}else if (n % 4 == 2){
		ans = n + 1;
	}else if (n % 4 == 3){
		ans = 0;
	}else if (n % 4 == 0){
		ans = n;
	}
	cout << ans;
}