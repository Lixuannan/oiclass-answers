//Created in Sat Nov 12 11:58:30 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n > 27){
		cout<<30 - (n - 27)%30;
	}
	else{
		if (n == 27){
			cout<<1;
		}
		else{
			cout<<27 - n;
		}
	}
}