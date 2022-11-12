//Created in Sat Nov 12 11:59:14 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int a,b;

unsigned long long gcd(unsigned long long n, unsigned long long m){
    for (unsigned long long i=min(n, m); i > 0; i--){
		if (n % i == 0 && m % i == 0){
            return i;
        }
	}
}

unsigned long long lcm(unsigned long long n, unsigned long long m){
    return n * m / gcd(n , m) ;
}

int main(){
    cin>>a>>b;
    unsigned long long _gcd = gcd(a, b);
    unsigned long long _lcm = lcm(a, b);
    unsigned long long ans = _gcd ^ _lcm;
    cout<<ans;
}