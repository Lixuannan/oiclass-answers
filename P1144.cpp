// Created in Sat Nov 12 16:27:18 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>
#include <algorithm>
using namespace std;
long long n, m, p, ans;
struct cow{
	long long price, a;
} a[2000001];
bool cmp(cow a, cow b){
	return a.price < b.price;
}
int main(){
	cin >> m >> n;
	if (m == 0 && n == 0){
		return 0;
	}
	for (int i=1; i <= n; i++){
		cin >> a[i].price >> a[i].a;
	}
	sort(a + 1, a + n + 1, cmp);
//	cout << "--------------\n";
//	for (int i=1; i <= n; i++){
//		cout << a[i].price << " " << a[i].a << endl;
//	}
//	cout << "--------------\n";
	int p = 1;
	while (m > 0){
		 if (a[p].a <= m){
		 	ans += a[p].price * a[p].a;
		 	m -= a[p].a;
		 }else {
		 	ans += a[p].price * m;
		 	m = 0;
		 }
		 p++;
	}
	cout << ans;
}