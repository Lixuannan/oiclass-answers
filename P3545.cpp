//Created in Fri Nov 11 14:56:42 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[999999], sum;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		sum += a[i] * (n - i);
	}
	cout << sum;
}