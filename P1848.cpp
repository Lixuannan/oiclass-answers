// Created in Sat Nov 12 16:27:27 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int ans;
string str, stri;
int main(){
	cin >> str >> stri;
	if (str.length() > stri.length()){
		ans = stri.length() - 1;
	}else{
		ans = str.length() - 1;
	}
	while(str.substr(0, ans) != stri.substr(stri.length() - ans, ans) 
	&& stri.substr(0, ans) != str.substr(str.length() - ans, ans)){
		ans -= 1;
	}
	cout << ans ;
}