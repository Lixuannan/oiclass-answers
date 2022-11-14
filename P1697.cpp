// Created in Sat Nov 12 16:27:25 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i = 2; i <= n; i++){
		if (n % i == 0 && n != i){
			cout<<"YES";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"NO";
}