//Created in Fri Nov 11 15:02:53 2022
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