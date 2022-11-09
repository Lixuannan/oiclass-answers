//Created in Wed Nov  9 16:21:46 2022
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