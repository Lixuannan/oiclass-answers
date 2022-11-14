// Created in Sat Nov 12 16:27:26 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
bool p=false;
int n,i,a[1000];
int main(){
	cin>>n;
	while (n > 0){
		a[i] = n % 2;
		i ++;
		n /= 2;
	}
	for (int i=999; i >= 0; i--){
		// cout<<p<<endl;
		if (a[i] == 0 && !p) continue;
		else p = true;
		if (p) cout<<a[i];
	}
}