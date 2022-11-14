// Created in Sat Nov 12 16:27:40 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n,sum;
int main(){
	cin>>n;
	if (n % 2 == 1){
		for (int i = n-1; i > 0; i-=2){
			sum += i;
		}
	}else{
		for (int i=1; i <= n; i++){
			if (n % i == 0){
				sum += i;
			}
		}
	}
	cout<<sum;
}