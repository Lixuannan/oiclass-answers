//Created in Sat Nov 12 11:58:54 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long n, k;
long long f(int x){
	if (x <= k){
		return 1;
	}else if ((x - k) % 2 == 0){
		return (f((x + k) / 2) + f((x - k) / 2));
	}
	return 1;
}
int main(){
	cin >> n >> k;
	cout << f(n);
}