//Created in Sat Nov 12 08:45:51 2022
 //System: Darwin 22.1.0
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