//Created in Sat Nov 12 11:58:53 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double sum_;
	int a,b;
	cin>>a>>b;
	sum_ += (a + b / 10.0);
	//cout<<sum_<<endl;
	cout<<(int)floor(sum_ / 11.10);
}