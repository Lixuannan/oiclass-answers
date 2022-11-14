// Created in Sat Nov 12 16:27:20 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
long long f(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;
	return (n - 1) * (f(n - 1) + f(n - 2));
}
int main(){
	cin >> n;
	cout << f(n);
}