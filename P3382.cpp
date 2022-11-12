//Created in Sat Nov 12 11:58:59 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
bool p=false;
long long n;

bool isprime(long long n){
	if (n % 2 == 0 || n == 1) return false;
	for (int i=3; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	while(cin>>n){
		if (n == 0) return 0;
		for (int i=2; i < n; i++){
			if (isprime(i) && isprime(n - i)){
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				break;
			}
		}
	}
}