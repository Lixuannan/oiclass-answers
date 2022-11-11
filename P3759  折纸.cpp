//Created in Fri Nov 11 11:49:53 2022
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