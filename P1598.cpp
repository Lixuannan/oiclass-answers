//Created in Sat Nov 12 11:58:45 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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