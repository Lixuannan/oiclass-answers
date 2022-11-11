//Created in Fri Nov 11 13:59:40 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, r, m, ans;
int a[99999999], b[99999999];
int main(){
	cin >> n >> r;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		sort(b + 1, b + r + 1);
		ans += a[i] + b[1];
		b[1] += a[i];
	}
	cout << ans;
}