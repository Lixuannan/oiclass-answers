//Created in Fri Nov 11 14:56:30 2022
#include<iostream>
#define ll long long
using namespace std;
ll n, hanoi3[9999], hanoi4[9999];
ll hanoi(int n){
	if (n == 1){
		return 1;
	}
	if (hanoi4[n]){
		return hanoi4[n];
	}
	hanoi4[n] = hanoi3[n];
	for (int i=1; i < n; i++){
		hanoi4[n] = min(hanoi4[n], 2 * hanoi(i) + hanoi3[n - i]);
	}
	return hanoi4[n];
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		hanoi3[i] = 2 * hanoi3[i - 1] + 1;
	}
	cout << hanoi(n);
}