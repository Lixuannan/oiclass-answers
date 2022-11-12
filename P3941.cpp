//Created in Sat Nov 12 09:25:56 2022
 //System: Darwin 22.1.0
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