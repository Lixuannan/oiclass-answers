//Created in Fri Nov 11 16:39:47 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n;

bool isNotPrime(int n){
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return true;
		}
	}
	return false;
}

bool hasPureFactor(int n){
	bool p[n + 1];
	memset(p, false, sizeof p);
	if (sqrt(n) == ceilf(sqrt(n))){
		return false;
	}
	while (n > 1.0000){
		for (int i=2; i <= n; i++){
			if (n % i == 0){
				// cout << i << endl;
				if (p[i]){
					return false;
				}else{
					n /= i;
					p[i] = true;
					break;
				}
			}
		}
	}
	return true;
}

int main(){
	scanf("%d", &n);
	for (int i=6; i <= n; i++){
		if (isNotPrime(i)){
			if (hasPureFactor(i)){
				printf("%d ", i);
			}
		}
	}
}