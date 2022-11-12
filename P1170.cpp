//Created in Sat Nov 12 11:58:42 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int v, n, a[99999999];
int f(int n, int v){
	if (n == 0){
		return 0;
	}else if (v < a[n]){
		return f(n - 1, v);
	}
	return max(f(n - 1, v), f(n - 1, v - a[n]) + a[n]);
}
int main(){
	cin >> v >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	cout << v - f(n, v) << endl;
}