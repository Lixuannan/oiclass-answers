// Created in Sat Nov 12 16:27:34 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<queue>
#define int long long
using namespace std;
struct passenger {
	int t, x;
};
int n, ti, k, cnt;
int country[99999999];
queue<passenger> q;
signed main() {
	cin >> n;
	for (int i=1; i <= n; i++) {
		cin >> ti >> k;
		for (int j=1; j <= k; j++) {
			passenger p;
			p.t = p.x = 0;
			p.t = ti;
			cin >> p.x;
			q.push(p);
//			cout << q.back().x << endl;
			country[q.back().x] += 1;
			if (country[q.back().x] == 1) {
				cnt += 1;
			}
		}
		while (q.back().t - q.front().t >= 86400) {
			if (country[q.front().x] == 1) cnt -= 1;
			country[q.front().x] -= 1;
			q.pop();
		}
		cout << cnt << endl;
	}
}