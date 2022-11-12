//Created in Sat Nov 12 11:58:45 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n,sum,max_,min_ = 999999;
int main(){
	for (int i=1; i <= 12; i++){
		cin>>n;
		if (n < min_) min_ = n;
		if (n > max_) max_ = n;
		sum += n;
	}
	cout<<(sum - max_ - min_) / 10;
}