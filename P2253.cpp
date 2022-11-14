// Created in Sat Nov 12 16:27:35 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<deque>
using namespace std;
int s, k, p;
deque<int> dq;
char activity, side;
int main(){
	cin >> s;
	for (int i=1; i <= s; i++){
		cin >> activity >> side;
		if (activity == 'A'){
			if (side == 'L'){
				dq.push_front(++p);
			}else if (side == 'R'){
				dq.push_back(++p);
			}
		}else if (activity == 'D'){
			cin >> k;
			if (side == 'L'){
				for (int j=1; j <= k; j++){
					dq.pop_front();
				}
			}else if (side == 'R'){
				for (int j=1; j <= k; j++){
					dq.pop_back();
				}
			}
		}
//		cout << dq.size() << endl;
	}
	while (!dq.empty()){
		cout << dq.front() << endl;
		dq.pop_front();
	}
}