//Created in Fri Nov 11 13:59:25 2022
#include<iostream>
using namespace std;
int n, k, cnt, a[999999];
int main(){
	cin >> n >> k;
	for(int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		if (a[i] > a[k] && i != k){
			cnt += 1;
		}
	}
	cout << cnt;
}