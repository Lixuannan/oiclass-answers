//Created in Fri Nov 11 15:24:28 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, a[102][102], b[102];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> a[i][j];
		}
		sort (a[i], a[i] + n + 1);
		b[i] = a[i][n / 2 + 1];
	}
	sort (b, b+ n + 1);
	cout << b[n / 2 + 1];
}