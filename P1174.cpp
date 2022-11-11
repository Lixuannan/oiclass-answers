//Created in Fri Nov 11 15:24:30 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;

long long qpow(int b, int p, int k){
	if (p == 0){
		return 1;
	}
	long long tmp = qpow(b, p / 2, k) % k;
	if (p % 2 == 0){
		return tmp * tmp % k;
	}
	return tmp * tmp * b % k;
}

int b, p, k;
int main(){
	cin >> b >> p >> k;
	cout << b << "^" << p << " mod " << k << "=" << qpow(b, p , k);
}