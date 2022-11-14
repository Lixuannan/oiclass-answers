// Created in Sat Nov 12 16:27:24 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
string str;


string times(string a, int b){
	string ans;
	for (int i=1; i <= b; i++){
		ans += a;
	}
	return ans;
}

int main(){
	cin >> str;
	for (int i=1; i <= 100; i++){
		for (int j=1; j <= 100; j++){
			if (str == times(str.substr(0, i), j)){
				cout << i;
				return 0;
			}
		}
	}
}