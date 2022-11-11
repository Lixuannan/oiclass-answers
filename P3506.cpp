//Created in Fri Nov 11 16:16:20 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, k, in, sum, maxn;
int main(){
	cin >> n >> k;
	for (int i=1; i <= n; i++){
		cin >> in;
		// cout << sum << endl;
		if (in <= k){
			sum += 1;
		}else{
			sum = 0;
		}
		if (sum > maxn){
			maxn = sum;
		}
	}
	cout << maxn;
}