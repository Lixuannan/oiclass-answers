// Created in Sat Nov 12 16:27:23 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
	if (n == 2){
		return true;
	}
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int getFactor(int n){
	for (int i = n; i >= 1; i--){
		if (n % i == 0){
			if (isPrime(i)){
				return i;
			}
		}
	}
}
int n, in, ans, maxFact;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		int fact = getFactor(in);
		if (maxFact < fact){
			ans = in;
			maxFact = fact;
		}
	}
	cout << ans;
}