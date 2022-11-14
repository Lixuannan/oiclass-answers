// Created in Sat Nov 12 16:27:44 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n * 2 - 1) - (i * 2 - 1)) / 2; j++) cout<<" ";
		for (int j=1; j <= (i * 2) - 1; j++) cout<<"*";
		cout<<endl;
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n - 1) * 2 + 1 - 1) / 2; j++) cout<<" ";
		cout<<"*";
		for (int j=1; j <= (n - 1) / 2; j++) cout<<" ";
		cout<<"\n";
	}
}