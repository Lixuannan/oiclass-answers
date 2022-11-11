//Created in Fri Nov 11 16:40:06 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
unsigned int n, x, y;
int main(){
	cin >> n;
	x = n << 16;
	y = n >> 16;
	n = x + y;
	cout << n;
}