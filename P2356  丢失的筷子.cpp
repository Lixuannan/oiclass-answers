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