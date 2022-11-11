//Created in Fri Nov 11 14:18:41 2022
#include<iostream>
using namespace std;
int n, a[121], in, cnt;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cnt = 0;
		cin >> in;
		a[in] += 1;
		for (int j=in + 1; j <= 120; j++){
			cnt += a[j];
		}
		cout << cnt << " ";
	}
}