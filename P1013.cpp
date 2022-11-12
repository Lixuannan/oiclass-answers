//Created in Sat Nov 12 11:58:30 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double ton;
	cin>>ton;
	if (ton <= 40){
		cout<<setprecision(2)<<fixed<<ton*2.0;
		}
	else{
		cout<<setprecision(2)<<fixed<<40*2.0 + (ton - 40) * 2.4;
	}
}