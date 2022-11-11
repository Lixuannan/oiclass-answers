//Created in Fri Nov 11 16:04:19 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, s[1001][1001], a[1001];
int main(){
	cin >> n;
	ios::sync_with_stdio(false);
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			cin >> s[i][j]; // 输入 
		}
	}
	a[1] = (s[1][2] + s[1][3] + s[2][3]) / 2 - s[2][3]; // 计算a1 
	cout << a[1] << " "; // 输出算好的a1 
	for(int i=2;i<=n;i++){
		cout << s[i - 1][i] - a[1] << " "; // 输出算出来的ai 
		a[1] = s[i - 1][i] - a[1]; // 更新a1 
	}
}