//Created in Sat Nov 12 08:45:50 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>
using namespace std;

bool isGood(int a[], int n){
	sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i + 1] - a[i] > 1){
			return false;
		}
	}
	return true;
}

int t, n, a[100];
int main(){
	cin >> t;
	for (int i=1; i <= t; i++){
		cin >> n;
		for (int j=1; j <= n; j++){
			cin >> a[j];
		}
		if (isGood(a, n)){
			cout << "YES\n";
		}else {
			cout << "NO\n";
		}
	}
}