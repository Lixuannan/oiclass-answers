//Created in Fri Nov 11 14:18:50 2022
#include<iostream>
using namespace std;
int n, a[300001], maxn;
bool p[300001];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		p[i] = true;
	}
	for (int i=31; i >= 0; i--){
		int tmp = 0;
		for (int j=1; j <= n; j++){
			if (a[j] & (1 << i) && p[j]){
				tmp += 1;
			}
		}
		if (tmp > 1){
			for (int j=1; j <= n; j++){
				if (!(a[j] & (1 << i))){
					p[j] = false;
				}
			}
			maxn += 1 << i;
		}
	}
	cout << maxn;
}