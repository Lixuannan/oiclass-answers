// Created in Sat Nov 12 16:27:22 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int a[10],in,cnt;
int main(){
	for (int i=0; i < 10; i++){
		cin>>a[i];
	}
	cin>>in;
	for (int i=0; i < 10; i++){
		if (a[i] <= in + 30) cnt++;
		else continue;
	}
	cout<<cnt;
}