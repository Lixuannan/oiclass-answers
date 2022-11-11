//Created in Fri Nov 11 15:02:24 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, l, k, cnt, a[9999999];
int main(){
	cin >> n >> l >> k;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i] <= l){
			cnt += 1;
			l += k;
		}
	}
	cout << cnt;
}