//Created in Fri Nov 11 15:25:18 2022
 //System: Darwin 22.1.0
#include<iostream>
#define ll long long
using namespace std;
string turn(ll n){
	string str;
	while (n > 0){
		if (n % 26 == 0){
			str = 'Z' + str;
			n -= 1;
		}else {
			str = char ((n % 26) - 1 + 'A') + str;
		}
		n /= 26;
	}
	return str;
}
ll n;
int main(){
	cin >> n;
	cout << turn(n);
}