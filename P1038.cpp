// Created in Sat Nov 12 16:27:11 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, m, a;
int main(){
	cin>>n>>m;
	for (int i=1; i <= m; i++){
		if (m % i == 0 && n % i == 0 && i > a){
			a = i;
		}
	}
	cout<<a;
}