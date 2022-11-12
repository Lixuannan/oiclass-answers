//Created in Sat Nov 12 11:59:08 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, b, sum, cnt, a[9999999];

bool cmp(int a, int b){
	return a > b;
}

int main(){
	cin >> n >> b;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; sum < b; i++){
		sum += a[i];
		cnt += 1;
	}
	cout << cnt;
}