//Created in Fri Nov 11 11:49:38 2022
#include<iostream>
using namespace std;
int n, in, ans;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		ans ^= in;
	}
	cout << ans;
}