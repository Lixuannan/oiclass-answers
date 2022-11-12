//Created in Sat Nov 12 11:58:37 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, k, a[30001], in;

bool cmp(int a, int b){
	if (a < b){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n + 1, cmp);
	cin >> k;
	for (int i=1; i <= k; i++){
		cin >> in;
		cout << a[in] << endl;
	}
}