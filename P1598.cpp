//Created in Fri Nov 11 16:04:20 2022
 //System: Darwin 22.1.0
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