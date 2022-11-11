//Created in Fri Nov 11 16:16:04 2022
 //System: Darwin 22.1.0
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