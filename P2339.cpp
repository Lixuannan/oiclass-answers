//Created in Fri Nov 11 14:56:30 2022
#include<iostream>
using namespace std;
long long n, k;
long long f(int x){
	if (x <= k){
		return 1;
	}else if ((x - k) % 2 == 0){
		return (f((x + k) / 2) + f((x - k) / 2));
	}
	return 1;
}
int main(){
	cin >> n >> k;
	cout << f(n);
}