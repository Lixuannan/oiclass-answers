// Created in Sat Nov 12 16:27:39 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, cnt, m, in, a[101], b[101];
bool s[102][102];

int main(){
	cin >> m >> n;
	for (int i=1; i <= m; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		cin >> b[i];
	}
	for (int i=1; i <= m; i++){
		for (int j=1; j <= n; j++){
			s[max(a[i], b[j])][min(a[i], b[j])] = true;
		}
	}
	for (int i=1; i <= 101; i++){
		for (int j=1; j <= 101; j++){
			if (s[i][j]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}