// Created in Sat Nov 12 16:27:09 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	double s;
	cin>>s;
	if (s<=2.5){
		cout<<10;
	}
	else{
		cout<<(int)(10 + (s - 2.5) * 2.6 + 0.5);
	}
}