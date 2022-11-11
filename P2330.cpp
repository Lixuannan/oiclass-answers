//Created in Fri Nov 11 15:02:38 2022
#include<iostream>
using namespace std;
int n, a[99999];
int count(int n){
	if (a[n]){
		return a[n];
	}
	if (n == 0){
		return 0;
	}
	int cnt = 0;
	for (int i = 0; i <= n / 2; i++){
		cnt += count(i);
	}
	cnt += 1;
	a[n] = cnt;
	return cnt;
}
int main(){
	cin >> n;
	cout << count(n);
}