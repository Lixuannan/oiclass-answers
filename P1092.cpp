// Created in Sat Nov 12 16:27:15 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
short cnt = 1;
long long ans;
string in;
int main(){
	cin >> in;
	while (in.length() > 0){
		ans += (in[in.length() - 1] - '0') * (pow(2, cnt) - 1);
		cnt += 1;
		in.erase(in.length()-1, 1);
	}
	if (ans > 2147483647 || ans <= 0){
		cout << "too long!";
	}else{
		cout << ans;
	}
}