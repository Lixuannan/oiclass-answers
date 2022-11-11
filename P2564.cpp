//Created in Fri Nov 11 16:16:16 2022
 //System: Darwin 22.1.0
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