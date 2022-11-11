//Created in Fri Nov 11 15:24:57 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, a1, cnt, a2, b1, b2;
int main(){
	cin >> n >> a1 >> a2;
	for (int i=1; i <= n; i++){
		if (b1 == b2){
			cnt += 1;
		}
		b1 += 1;
		b1 %= a1;
		b2 += 1;
		b2 %= a2;
	}
	cout << cnt;
}