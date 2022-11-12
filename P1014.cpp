//Created in Sat Nov 12 11:58:30 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double weight, cost;
	cin>>weight;
	if (weight<=10){
		cout<<setprecision(2)<<fixed<<2.5;
	}
	else{
		cout<<setprecision(2)<<fixed<<2.5 + (weight - 10) * 1.5;
	}
}