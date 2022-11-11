//Created in Fri Nov 11 11:49:20 2022
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