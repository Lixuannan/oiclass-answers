// Created in Sat Nov 12 16:27:21 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<stack>
using namespace std;
string str;
int x, y, n;
stack<int> s;
int main(){
	cin >> str;
	for (char in: str){
		if (in >= '0' && in <= '9'){
			n = n * 10 + (in - '0');
		}else if (in == '.'){
			s.push(n);
			n = 0;
		}else if (in == '+' || in == '-' || in == '*'){
			x = s.top();
			s.pop();
			y = s.top();
			s.pop();
			if (in == '+'){
				s.push(x + y);
			}else if (in == '-'){
				s.push(y - x);
			}else if (in == '*'){
				s.push(x * y);
			}
		}
	}
	cout << s.top();
}