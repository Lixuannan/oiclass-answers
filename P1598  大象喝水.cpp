//Created in Fri Nov 11 10:52:14 2022
#include<iostream>
using namespace std;
int main(){
	int h, r, vi;
	double v;
	cin>>h>>r;
	v = 3.14159*h*r*r / 1000;
	vi = 20 / v + 1;
	cout<<vi;
}