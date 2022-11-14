// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
long long n, a[2000000], cnt;
int main(){
	scanf("%lld", &n);
	for (int i=1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i] != a[i + 1]){
			cout << a[i] << " " << cnt + 1 << endl;
			cnt = 0;
		}else{
			cnt += 1;
		}
	}
}