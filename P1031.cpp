// Created in Sat Nov 12 16:27:10 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	for (int i=1000; i<10000; i++){
		if ((i/1000%10)*(i/1000%10)*(i/1000%10)*(i/1000%10)+(i/100%10)*(i/100%10)*(i/100%10)*(i/100%10) + (i/10%10)*(i/10%10)*(i/10%10)*(i/10%10) + (i/1%10)*(i/1%10)*(i/1%10)*(i/1%10) == i){
			cout<<i<<endl;
		}
	}
}