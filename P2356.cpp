//Created in Sat Nov 12 09:25:41 2022
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