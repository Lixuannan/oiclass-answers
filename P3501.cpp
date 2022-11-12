//Created in Sat Nov 12 11:59:01 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long x,y,z;
int main(){
	cin>>x>>z;
	for (y=1; y <= 2147483647; y++){
		if (x * y % z == 0){
			cout<<y;
			return 0;
		}
	}
}