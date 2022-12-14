//Created in Sat Nov 12 11:59:15 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;
string to2(int n){
	string ans;
	while (n > 0){
		ans = char ((n % 2) + '0') + ans;
		n /= 2;
	}
	return ans;
}
int n, p, power = 1, ans[9999999];
string n2;
stringstream ss;
int main(){
	cin >> n;
	if (n % 2 == 1){
		cout << -1;
		return 0;
	}
	n2 = to2(n);
	while(n2.length() > 0){
		if (n2[n2.length() - 1] == '1'){
			ans[++p] = power;
		}
		power *= 2;
		n2.erase(n2.length() - 1, 1);
	}
	for (int i=9999998; i >= 1; i--){
		if (ans[i] != 0){
			cout << ans[i] << " ";
		} 
	}
}