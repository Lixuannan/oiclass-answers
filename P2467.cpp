//Created in Sat Nov 12 11:58:55 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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