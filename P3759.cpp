//Created in Sat Nov 12 11:59:13 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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