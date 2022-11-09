//Created in Wed Nov  9 16:21:49 2022
#include<iostream>
using namespace std;
long long n, a[9999999], ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=2; i <= n; i++){
		ans += max(a[i], a[i - 1]);
	}
	cout << ans;
}