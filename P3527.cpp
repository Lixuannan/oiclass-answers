// Created in Sat Nov 12 16:27:45 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int pow(int a, int b){
	if (b == 0){
		return 1;
	}
	register int ans = 1;
	for (int i=1; i <= b; i++){
		ans *= a;
	}
	return ans;
}
int main(){
	cin >> n;
	while (n > 0){
		for (int i=16; i >= 0; i--){
			register int tmp = pow(2, i);
			if (tmp <= n){
				n -= tmp;
				cout << "2 " << i << endl;
			}
		}
	}
}