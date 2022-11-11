//Created in Fri Nov 11 14:56:16 2022
#include<iostream>
#include<algorithm>
using namespace std;
int a[9999999], c[9999999], n, k, ain, b;
int main(){
	cin >> n >> k;
	for (int i=1; i <= k; i++){
		cin >> ain >> b;
		c[ain] += 1;
		c[b + 1] -= 1;
	}
	for (int i=1; i <= n; i++){
		a[i] = a[i - 1] + c[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[n / 2 + 1];
}