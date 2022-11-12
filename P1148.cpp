//Created in Sat Nov 12 11:58:39 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long a=1,b=1,c=1,in;
int main(){
	cin>>in;
	for (int i=1; i < in - 1; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}