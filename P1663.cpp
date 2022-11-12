//Created in Sat Nov 12 09:25:32 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
	if (n == 2){
		return true;
	}
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int getFactor(int n){
	for (int i = n; i >= 1; i--){
		if (n % i == 0){
			if (isPrime(i)){
				return i;
			}
		}
	}
}
int n, in, ans, maxFact;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		int fact = getFactor(in);
		if (maxFact < fact){
			ans = in;
			maxFact = fact;
		}
	}
	cout << ans;
}