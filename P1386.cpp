//Created in Sat Nov 12 11:58:43 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
string f(string a, string b){
	if (a.empty() || b.empty()){
		return "";
	}
	char g = a[0];
	string b1 = b.substr(0, b.find(g));
	string b2 = b.substr(b.find(g) + 1);
//	cout << b1 << " " << b2;
	string a1 = a.substr(1, b1.length());
	string a2 = a.substr(b1.length() + 1, b2.length());
//	cout << a1 << " " << a2; 
	return f(a1, b1) + f(a2, b2) + g;
}
string a, b;
int main(){
	while (cin >> a >> b){
		cout << f(a, b) << endl;
	}
}