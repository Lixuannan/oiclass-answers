//Created in Sat Nov 12 11:58:39 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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