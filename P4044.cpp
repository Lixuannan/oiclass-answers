//Created in Sat Nov 12 11:59:15 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, a[999999], b[999999];

int sum(int x){
	int sum = 0;
	for (int i=0; i <= x; i++){
		sum += a[i];
	}
	return sum;
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> b[i];
		a[i] = b[i] * i - sum(i - 1);
	}
	for (int i=1; i <= n; i++){
		cout << a[i] << " ";
	}
}