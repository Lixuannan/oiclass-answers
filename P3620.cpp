//Created in Sat Nov 12 11:59:07 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, x, ans[10];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		x = i;
		while (x > 0){
			ans[x % 10] += 1;
			x /= 10;
		}
	}
	for (int i=0; i <= 9; i++){
		cout << ans[i] << " ";
	}
}