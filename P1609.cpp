//Created in Sat Nov 12 11:58:46 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f, c;
	//   f=9/5*c+32
	cin>>c;
	f = 1.8*c+32;
	cout<<setprecision(2)<<fixed<<f;
}