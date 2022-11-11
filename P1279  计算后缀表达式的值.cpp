//Created in Fri Nov 11 14:18:49 2022
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