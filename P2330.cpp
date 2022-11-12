//Created in Sat Nov 12 11:58:54 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, a[99999];
int count(int n){
	if (a[n]){
		return a[n];
	}
	if (n == 0){
		return 0;
	}
	int cnt = 0;
	for (int i = 0; i <= n / 2; i++){
		cnt += count(i);
	}
	cnt += 1;
	a[n] = cnt;
	return cnt;
}
int main(){
	cin >> n;
	cout << count(n);
}