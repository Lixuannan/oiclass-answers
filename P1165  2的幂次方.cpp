//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
string f(long long n){
	string ans;
	for (int i=63; i >= 0; i--){
		if (pow(2, i) <= n){
			if (i == 1){
				ans += "2";
			}else if (i == 0){
				ans += "2(0)";
			}else {
				ans += "2(" + f(i) + ")";
			}
			n -= pow(2, i);
			if (n != 0){
				ans += "+";
			}
		}
	}
	return ans;
}
int main(){
	cin >> n;
	cout << f(n);
}