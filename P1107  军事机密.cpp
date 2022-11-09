//Created in Wed Nov  9 16:21:48 2022
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