//Created in Fri Nov 11 14:30:56 2022
#include<iostream>
using namespace std;
int n;
long long f(int n){
	if (n == 1) return 0;
	if (n == 2) return 1;
	return (n - 1) * (f(n - 1) + f(n - 2));
}
int main(){
	cin >> n;
	cout << f(n);
}