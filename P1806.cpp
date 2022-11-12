//Created in Sat Nov 12 11:58:48 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
bool p[999999999];
long long n, maxr, l[999999], r[999999], a[99999999];
int main(){
	cin >> n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=1; i <= n; i++){
		cin >> l[i] >> r[i];
		maxr = max(maxr, r[i]);
	}
	for (int i=2; i <= ceil(sqrt(maxr)); i++){
		if (!p[i]){
			for (int j=2; i * j <= maxr; j++){
				p[i * j] = true;
			}
		}
	}
	for (int i=1; i <= maxr; i++){
		a[i] = a[i - 1] + !p[i];
	}
	for (int i=1; i <= n; i++){
		cout << a[r[i]] - a[l[i] - 1] << endl;
	}
}