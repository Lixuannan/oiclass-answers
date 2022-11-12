//Created in Sat Nov 12 11:59:15 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int in, minA = 999999, minB = 999999;
int main(){
	for (int i=1; i <= 4; i++){
		cin >> in;
		minA = min(in, minA);
	}
	for (int i=1; i <= 3; i++){
		cin >> in;
		minB = min(in, minB);
	}
	cout << minA + minB;
}