//Created in Sat Nov 12 08:45:17 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int n, a[999999], x;
int main(){
	cin >> n;
	/*
	1 : 1; -1 + 2;
	2 : 3; 1 + 2;
	3 : 7; 2 + 4;
	4 : 11; 7 + 4;
	5 : 17; 11 + 6
	*/
	a[1] = 1;
	x = 2;
	for (int i=2; i <= n; i++){
		a[i] = a[i - 1] + x;
		if (!(i & 1)){
			x += 2;
		}
		// cout << a[i] << endl;
	}
	cout << a[n];
}