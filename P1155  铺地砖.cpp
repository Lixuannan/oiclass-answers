//Created in Fri Nov 11 10:52:10 2022
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