//Created in Sat Nov 12 11:59:04 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, a, b, xmax, xmin = 99999, ymax, ymin = 99999;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a >> b;
		if (a > xmax){
			xmax = a;
		}
		if (b > ymax){
			ymax = b;
		}
		if (b < ymin){
			ymin = b;
		}
		if (a < xmin){
			xmin = a;
		}
	}
	cout << max(xmax - xmin, ymax - ymin) * max(xmax - xmin, ymax - ymin);
}