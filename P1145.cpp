//Created in Sat Nov 12 09:25:28 2022
 //System: Darwin 22.1.0
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