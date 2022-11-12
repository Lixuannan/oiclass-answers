//Created in Sat Nov 12 11:58:52 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	int input, ge, shi,bai;
	cin>>input;
	bai = input / 100;
	shi = input / 10 % 10;
	ge = input % 10;
	cout<<ge<<shi<<bai;
}