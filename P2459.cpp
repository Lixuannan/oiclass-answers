//Created in Sat Nov 12 11:58:55 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
string in;

string check(string str){
	string tmp;
	for (int i=0; i <= str.size() - 1; i++){
		tmp = str[i] + tmp;
	}
	if (tmp == str && tmp.size() % 2 == 0){
		return check(tmp.substr(0, tmp.size() / 2));
	}
	return str;
}
int main(){
	cin >> in;
	cout << check(in).length();
}