// Created in Sat Nov 12 16:27:45 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
	if (n == 2){
		return true;
	}
	if (n % 2 == 0 || n < 2){
		return false;
	}
	for (int i=2; i <= ceil(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int n, a[2000], cnt;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n - 2; i++){
		for (int j=i; j <= n - 1; j++){
			for (int k=j; k <= n; k++){
				if (i != j && j != k){
					cnt += isprime(a[i] + a[j] + a[k]);
				}
			}
		}
	}
	cout << cnt;
}