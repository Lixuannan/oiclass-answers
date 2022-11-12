//Created in Sat Nov 12 11:58:43 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<deque>
using namespace std;
int n, m, x, cnt;
deque<int> dq;
int main(){
	cin >> m >> n;
	for (int i=1; i <= n; i++){
		cin >> x;
		bool p = false;
		for (int i=0; i < dq.size(); i++){
			if (dq.at(i) == x){
				p = true;
				break;
			}
		}
		if (!p){
			cnt += 1;
			if (dq.size() >= m){
				dq.pop_front();
			}
			dq.push_back(x);
		}
	}
	cout << cnt;
}