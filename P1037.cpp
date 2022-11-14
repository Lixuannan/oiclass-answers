// Created in Sat Nov 12 16:27:11 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
long long n;
int cnt;
int main(){
	cin>>n;
	if (n <= 0){
		cout<<"-";
		n = abs(n);
	}
	n *= 10;
	while(n > 1.0000000001){
		if (cnt == 0 || n / 10 <= 0){
			if (n / 10 % 10 != 0){
				cout<<n / 10 % 10;
				n /= 10;
				cnt++;
			}else{
				n /= 10;
				continue;
			}
		}else{
			cout<<n / 10 % 10;
			n /= 10;
			cnt++;
		}
		
	}
	return 0;
}