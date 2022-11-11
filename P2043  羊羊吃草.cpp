//Created in Fri Nov 11 11:49:35 2022
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