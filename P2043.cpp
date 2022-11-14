// Created in Sat Nov 12 16:27:31 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
long long n, t, s[9999999], a[9999999], ans[3], maxn;
int main(){
	cin >> n >> t;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	for (int i=1; i <= n - 1; i++){
		for (int j=i + maxn; j <= n; j++){
			// cout << i << " " << j << " " << s[j] << " " << s[i - 1] << " " << s[j] - s[i - 1] << endl;
			if (s[j] - s[i - 1] <= t){
				if (j - i > maxn){
					maxn = j - i;
					ans[1] = i;
					ans[2] = j;
				}
			}else{
				break;
			}
		}
	}
	cout << ans[1] << " " << ans[2];
}