//Created in Sat Nov 12 11:58:35 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, m, a[1000][1000];
int main(){
	cin >> m >> n;
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			a[i][j] = a[i][j] + max(a[i][j - 1], a[i - 1][j]);
		}
	}
	cout << a[m][n];
}