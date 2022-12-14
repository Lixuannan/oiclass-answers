// Created in Sat Nov 12 16:27:14 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<sstream>
using namespace std;

string bin, nin;
int str2int(string n){
	int ans = 0;
	stringstream ss;
	ss.clear();
	ss << n;
	ss >> ans;
	return ans;
}

int dSum(string n){
	int sum = 0;
	for (int i=0; i <= n.length() - 1; i++){
		sum += n[i] - '0';
	}
	return sum;
}
int main(){
	while(cin >> bin){
		if (bin != "0"){
			cin >> nin;
			//cout << str2int(nin) << " " << dSum(nin) << endl;
			if (str2int(nin) % dSum(nin) == 0){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}else{
			return 0;
		}
	}
}