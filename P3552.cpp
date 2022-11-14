// Created in Sat Nov 12 16:27:46 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<sstream>
using namespace std;
string raw, ans;

string to2(string n){
	int pow = 1;
	int anss = 0;
	stringstream ss;
	while(n.length() > 0){
		anss += (n[n.length() - 1] - '0') * pow;
		pow *= 2;
		n.erase(n.length() - 1, 1);
	}
	string ans;
	ss.clear();
	ss << anss;
	ss >> ans;
	return ans;
}

int main(){
	cin >> raw;
	cout << to2(raw.substr(0, 8)) << '.';
	cout << to2(raw.substr(8, 8)) << '.';
	cout << to2(raw.substr(16, 8)) << '.';
	cout << to2(raw.substr(24, 8));
}