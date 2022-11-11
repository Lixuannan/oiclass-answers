//Created in Fri Nov 11 16:39:54 2022
 //System: Darwin 22.1.0
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