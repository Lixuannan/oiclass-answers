// Created in Sat Nov 12 16:27:12 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, s, cnt;

struct child{
	long long a, b;
};

child a[1001];
int main(){
	cin >> n >> s;
	for (int i=1; i <= n; i++){
		cin >> a[i].a >> a[i].b;
	}
	for (int i=1; i <= n - 1; i++){
		for (int j=i+1; j <= n; j++){
			if (a[j].b == a[i].b && a[j].a >= a[i].a){
				swap(a[j], a[i]);
			}else if(a[j].b < a[i].b){
				swap(a[j], a[i]);
			}else {
				continue;
			}
		}
	}
	for (int i=1; i <= n; i++){
		if (s >= a[i].b && a[i].b > 0){
			a[i].b = 0;
			s += a[i].a;
			cnt += 1;
		}
	}
	cout << cnt;
}