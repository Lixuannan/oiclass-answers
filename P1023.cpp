//Created in Sat Nov 12 11:58:31 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int in, act, time123, ans;
int main(){
	cin>>time123;
	for (act=1; act<=time123; act++){
		cin>>in;
		if (in != act){
			ans += 1;
		}
	}
	cout<<ans;
}