//Created in Fri Nov 11 16:16:01 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long n, a[999999];
int main(){
	cin >> n;
	a[1] = 1;
	a[2] = 3;
	for (int i=3; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2] * 2;
	}
	cout << a[n];
}