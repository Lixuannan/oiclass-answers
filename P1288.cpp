//Created in Fri Nov 11 16:16:03 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<stack>
using namespace std;
stack<int> s[80002];
long long n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		char c;
		long long x;
		cin >> c;
		if (c == 's'){
			s[i] = s[i - 1];
			s[i].pop();
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}else if (c == 't'){
			cin >> x;
			s[i] = s[x - 1];
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}else if (c == 'a'){
			s[i] = s[i - 1];
			cin >> x;
			s[i].push(x);
			if (s[i].empty()){
				cout << -1 << endl;
			}else {
				cout << s[i].top() << endl;
			}
		}
	}
}