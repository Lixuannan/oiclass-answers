//Created in Fri Nov 11 15:24:46 2022
 //System: Darwin 22.1.0
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