// Created in Sat Nov 12 16:27:25 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int cnt;
int main(){
	cin>>n;
	if (n % 10 == 5){
		while(n % 5 == 0){
			cnt++;
			n /= 5;
		}
	}else{
		while(n >= 0.1){
			if (n % 10 == 0){
				cnt ++;
				n /= 10;
			}else{
				n /= 10;
			}
		}
	}
	cout<<cnt<<endl;
}