// Created in Sat Nov 12 16:27:31 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	if (90<=m&&m<=100) cout<<"A";
	else{
		if (80<=m&&m<90) cout<<"B";
		else{
			if (70<=m&&m<80) cout<<"C";
			else{
				if (60<=m&&m<70) cout<<"D";
				else{
					if (m<60) cout<<"E";
				}
			}
		}
	}	
}