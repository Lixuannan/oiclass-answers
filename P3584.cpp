//Created in Sat Nov 12 11:59:05 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
unsigned long long n, p, ans = 0, jc = 1;
int main(){
	scanf("%lld %lld", &n, &p);
	if (n > p){
		n = p;
	}
	for (int i=1; i <= n; i++){
		jc *= i;
		jc %= p;
		ans += jc;
		ans %= p;
	}
	printf("%lld", ans);
}