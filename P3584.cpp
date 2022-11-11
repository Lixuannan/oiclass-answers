//Created in Fri Nov 11 14:56:43 2022
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