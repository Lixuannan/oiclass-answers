//Created in Fri Nov 11 15:24:49 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int x, y, cnt;
int main(){
	cin >> x >> y;
	while(x <= y){
		cnt += 1;
		x *= 2;
	}
	cout << cnt + 1;
}