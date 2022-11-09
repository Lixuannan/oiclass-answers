//Created in Wed Nov  9 16:22:17 2022
#include<iostream>
using namespace std;
int n, a[999999], b[999999];

int sum(int x){
	int sum = 0;
	for (int i=0; i <= x; i++){
		sum += a[i];
	}
	return sum;
}
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> b[i];
		a[i] = b[i] * i - sum(i - 1);
	}
	for (int i=1; i <= n; i++){
		cout << a[i] << " ";
	}
}