//Created in Wed Nov  9 16:21:49 2022
#include<iostream>
using namespace std;
int n, k, tmp, cnt, a;
int main(){
	cin >> n >> k;
	for (int i=1; i <= k + 1; i++){
		cin >> a;
		if (tmp > n){
			cout << "No Solution\n";
			return 0;
		}
		if (tmp + a > n){
			cnt += 1;
			tmp = 0;
		}
		tmp += a;
	}
	cout << cnt;
}