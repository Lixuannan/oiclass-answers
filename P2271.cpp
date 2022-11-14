// Created in Sat Nov 12 16:27:35 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<stack>
using namespace std;
stack<char> list;
char in;
int ans;
int main(){
	while(cin >> in){
		if (in == '('){
			list.push('(');
		}
		if (in == ')'){
			if (list.empty()){
				list.push('(');
				ans += 1;
			}else {
				list.pop();
			}
		}
	}
	if (!list.empty()){
		ans += list.size() / 2;
	}
	cout << ans;
}