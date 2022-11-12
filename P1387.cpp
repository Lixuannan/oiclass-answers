//Created in Sat Nov 12 11:58:43 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, x, y;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> x >> y;
		int l, r;
		l = r = 0;
		cout << "Scenario #" << i << ":" << endl;
		while (x != 1 || y != 1){
			// cout << x << " " << y << endl;
			if (x < y){
				r += y / x;
				y %= x;
				if (!y){
					y += 1;
					r -= 1;
				}
			}else if (x > y){
				l += x / y;
				x %= y;
				if (!x){
					x += 1;
					l -= 1;
				}
			}
		}
		cout << l << " " << r << endl;
	}
}