//Created in Fri Nov 11 15:02:34 2022
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