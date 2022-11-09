//Created in Wed Nov  9 16:21:17 2022
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