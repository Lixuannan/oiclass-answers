//Created in Fri Nov 11 14:31:09 2022
#include<iostream>
using namespace std;
int n, in, a[101], m, ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		a[i] += in;
	}
	cin >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n - 1; j++){
			if (a[j] < a[j + 1]){
				swap(a[j], a[j+1]);
			}
		}
	}
	for (int i=1; i <= 100; i++){
		if (a[i] == m){
			cout << i;
			return 0;
		}
	}
}