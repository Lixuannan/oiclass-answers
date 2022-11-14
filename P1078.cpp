// Created in Sat Nov 12 16:27:14 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
char str[257];
int main(){
	cin.getline(str, 255, '.');
	for (int i=0; i <= sizeof str - 1; i++){
		if (str[i] == ' '){
			cout << '#';
		}else if (str[i] >= 'a' && str[i] <= 'z'){
			cout << int(str[i]) - 96;
		}
	}
}