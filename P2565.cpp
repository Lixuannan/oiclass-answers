//Created in Sat Nov 12 11:58:56 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int maxLength(int n){
	int ans = 1;
	while (n != 1){
		if (n % 2 == 0){
			n /= 2;
		}else {
			n = 3 * n + 1;
		}
		ans += 1;
	}
	return ans;
}
int x, y, ans;
int main(){
	cin >> x >> y;
	for (int i=x; i <= y; i++){
		ans = max(maxLength(i), ans);
	}
	cout << ans;
}