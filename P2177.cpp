//Created in Fri Nov 11 15:24:43 2022
 //System: Darwin 22.1.0
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