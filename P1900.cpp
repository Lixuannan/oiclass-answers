// Created in Sat Nov 12 16:27:29 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int in, n, r;
int  main(){
	for (int i=1; i <= 12; i++){
		cin>>in;
		n += 300 - in;
		if (n < 0){
			cout<<-i;
			return 0;
		}
		r += n / 100;
		n -= n / 100 * 100;
	}
	cout<<r * 120 + n;
}