//Created in Fri Nov 11 16:16:03 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int v, n, a[99999999];
int f(int n, int v){
	if (n == 0){
		return 0;
	}else if (v < a[n]){
		return f(n - 1, v);
	}
	return max(f(n - 1, v), f(n - 1, v - a[n]) + a[n]);
}
int main(){
	cin >> v >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	cout << v - f(n, v) << endl;
}