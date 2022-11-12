//Created in Sat Nov 12 08:45:22 2022
 //System: Darwin 22.1.0
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