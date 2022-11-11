//Created in Fri Nov 11 11:49:48 2022
#include<iostream>
using namespace std;
int n, x, ans[10];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		x = i;
		while (x > 0){
			ans[x % 10] += 1;
			x /= 10;
		}
	}
	for (int i=0; i <= 9; i++){
		cout << ans[i] << " ";
	}
}