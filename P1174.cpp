// Created in Sat Nov 12 16:27:20 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;

long long qpow(int b, int p, int k){
	if (p == 0){
		return 1;
	}
	long long tmp = qpow(b, p / 2, k) % k;
	if (p % 2 == 0){
		return tmp * tmp % k;
	}
	return tmp * tmp * b % k;
}

int b, p, k;
int main(){
	cin >> b >> p >> k;
	cout << b << "^" << p << " mod " << k << "=" << qpow(b, p , k);
}