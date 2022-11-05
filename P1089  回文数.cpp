#include<iostream>
#include<sstream>
using namespace std;
bool p;
string n;

bool isHWS(string str){
	string tmp = "";
	for (int i=str.length() - 1; i >= 0; i--){
		if (str[i] != ' '){
			tmp += str[i];
		}
	}
	// cout << str << "\n" << tmp << endl;
	if (str == tmp){
		return true;
	}
	return false;
}

string toN(string str, int b){
	int tmp;
	string ans;
	stringstream ss;
	ss.clear();
	ss << str;
	ss >> tmp;
	ss.clear();
	while(tmp){
		if (tmp % b >= 10){
			ss << char ('A' + tmp % b - 10);
		}else{
			ss << tmp % b;
		}
		tmp /= b;
	}
	ss >> ans;
	// cout << b << " " << ans << endl;
	ss.clear();
	return ans;
}

int main(){
	while(cin >> n){
		p = false;
		if (n == "0"){
			return 0;
		}
		for (int i=2; i <= 16; i++){
			if (isHWS(toN(n, i))){
				if (!p){
					cout << "Number " << n << " is palindrom in basis " << i << " ";
					p = true;
				}else if (p){
					cout << i << " ";
				}
			}
		}
		if (!p){
			cout << "Number " << n << " is not a palindrom" << endl;
		}else{
			cout << endl;
		}
	}
//	cout << toN("15", 16);
}