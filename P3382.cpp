//Created in Sat Nov 12 08:45:32 2022
 //System: Darwin 22.1.0
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