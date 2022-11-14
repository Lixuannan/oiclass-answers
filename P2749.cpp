// Created in Sat Nov 12 16:27:41 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
long long  a,b,t;
int main(){
	cin>>a>>b;
	for (short i=0; i <= 9; i++){
		if (abs((10 * a + i + 1) - (b * 10)) <= 9){
			cout<<"Yes";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"No";
}