//Created in Fri Nov 11 14:56:42 2022
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