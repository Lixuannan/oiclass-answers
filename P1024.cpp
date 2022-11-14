// Created in Sat Nov 12 16:27:10 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int sum, sum2;
int in, num, num2;
int main(){
	cin>>in;
	for (int i=in; i>0; i--){
		cin>>in;
		if (in>=0){
			num += 1;
			sum += in;
		}else{
			num2 += 1;
			sum2 += in;
		}
	}
	cout<<num<<" "<<sum<<endl;
	cout<<num2<<" "<<sum2<<endl;
}