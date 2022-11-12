//Created in Sat Nov 12 08:45:12 2022
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