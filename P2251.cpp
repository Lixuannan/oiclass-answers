//Created in Sat Nov 12 11:58:54 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#define ll long long
using namespace std;
ll n, hanoi3[9999], hanoi4[9999];
ll hanoi(int n){
	if (n == 1){
		return 1;
	}
	if (hanoi4[n]){
		return hanoi4[n];
	}
	hanoi4[n] = hanoi3[n];
	for (int i=1; i < n; i++){
		hanoi4[n] = min(hanoi4[n], 2 * hanoi(i) + hanoi3[n - i]);
	}
	return hanoi4[n];
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		hanoi3[i] = 2 * hanoi3[i - 1] + 1;
	}
	cout << hanoi(n);
}