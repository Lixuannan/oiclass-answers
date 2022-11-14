// Created in Sat Nov 12 16:27:14 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
char a[102][102];
int n, m, t;
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			t = 0;
			if (a[i][j] == '.'){
				if(a[i][j+1] == '*'){
					t += 1;
				}
				if (a[i][j-1] == '*'){
					t += 1;
				}
				if (a[i+1][j] == '*'){
					t += 1;
				}
				if (a[i-1][j] == '*'){
					t += 1;
				}
				if (a[i-1][j-1] == '*'){
					t += 1;
				}
				if (a[i-1][j+1] == '*'){
					t += 1;
				}
				if (a[i+1][j-1] == '*'){
					t += 1;
				}
				if (a[i+1][j+1] == '*'){
					t += 1;
				}
				a[i][j] = char (t + '0');
			}
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}