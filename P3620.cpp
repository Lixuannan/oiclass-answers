//Created in Sat Nov 12 08:45:44 2022
 //System: Darwin 22.1.0
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