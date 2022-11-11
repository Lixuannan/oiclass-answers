//Created in Fri Nov 11 11:49:35 2022
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