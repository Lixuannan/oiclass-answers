//Created in Sat Nov 12 11:58:44 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<deque>
using namespace std;
int n, a;
bool p;
deque<int> dq;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a;
		if (p){
			dq.push_back(a);
		}else{
			dq.push_front(a);
		}
		p = !p;
	}
	if (p){
		while (!dq.empty()){
			cout << dq.front() << " ";
			dq.pop_front();
		}
	}else {
		while (!dq.empty()){
			cout << dq.back() << " ";
			dq.pop_back();
		}
	}
}