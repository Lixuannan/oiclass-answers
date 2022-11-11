//Created in Fri Nov 11 16:16:28 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long cnt, a, b;
int main(){
	cin >> a >> b;
	while (a != 0 && b != 0){
		if (a > b){
			cnt += a / b;
			a %= b;
		}else if (a < b){
			cnt += b / a;
			b %= a;
		}
	}
	cout << cnt;
}