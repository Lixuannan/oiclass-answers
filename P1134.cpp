//Created in Sat Nov 12 08:44:30 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long cnt, n, c1, c5, c10, c50, c100, c500;
int main(){
	cin >> c1 >> c5 >> c10 >> c50 >> c100 >> c500 >> n;
	while(n > 0){
		if (n >= 500 && c500){
			n -= 500;
			c500 -= 1;
		}else if (n >= 100 && c100){
			n -= 100;
			c100 -= 1;
		}else if (n >= 50 && c50){
			n -= 50;
			c50 -= 1;
		}else if (n >= 10 && c10){
			n -= 10;
			c10 -= 1;
		}else if (n >= 5 && c5){
			n -= 5;
			c5 -= 1;
		}else if (n >= 1 && c1){
			n -= 1;
			c1 -= 1;
		}
		cnt += 1;
	}
	cout << cnt;
}