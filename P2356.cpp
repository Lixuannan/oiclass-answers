//Created in Fri Nov 11 16:04:30 2022
 //System: Darwin 22.1.0
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