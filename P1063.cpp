//Created in Sat Nov 12 11:58:35 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, m, k, cnt, maxn;
short a[2000][2000];
int main(){
	cin >> n >> m >> k;
	for (int i=1; i <= n ; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= m; i++){
		// cout <<a[k][i] << "\t" << maxn << "\t" << cnt << endl;
		if (a[k][i] != 0){
			cnt += 1;
			if (cnt >= maxn){
				maxn = cnt;
			}
		}else{
			if (cnt >= maxn){
				maxn = cnt;
			}
			cnt = 0;
			// cout << a[k][i] << " " << maxn << endl;
			continue;
		}
	}
	cout << maxn;
}