//Created in Wed Nov  9 16:21:51 2022
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