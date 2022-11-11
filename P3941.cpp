//Created in Fri Nov 11 16:16:30 2022
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