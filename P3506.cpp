// Created in Sat Nov 12 16:27:44 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, k, in, sum, maxn;
int main(){
	cin >> n >> k;
	for (int i=1; i <= n; i++){
		cin >> in;
		// cout << sum << endl;
		if (in <= k){
			sum += 1;
		}else{
			sum = 0;
		}
		if (sum > maxn){
			maxn = sum;
		}
	}
	cout << maxn;
}