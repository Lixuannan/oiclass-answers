//Created in Fri Nov 11 14:56:29 2022
#include<iostream>
#include<algorithm>
using namespace std;
int n, m, sum;
short a[9999][9999];

bool cmp(int a, int b){
	if (a > b){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			cin >> a[i][j];
		}
		sort(a[i] + 1, a[i] + m + 1, cmp);
		sum += a[i][1];
	}
	cout << sum;
}