//Created in Fri Nov 11 14:19:15 2022
#include<iostream>
using namespace std;
long long t, n, a[120];

bool check(long long x){
	for (int i=1; i <= 118; i++){
		for (int j=2; j <= 119; j++){
			if (a[i] * a[j] == x){
				return true;
			}
		}
	}
	return false;
}

int main(){
	cin >> t;
	a[1] = a[2] = 1;
	for (int i=3; i <= 99; i++){
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 1; i <= t; i++){
		cin >> n;
		if (check(n)){
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	}
}