// Created in Sat Nov 12 16:27:40 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
struct pipe{
	unsigned long long length, thin, code;
} a[99999];

bool cmp(pipe a, pipe b){
	if (a.length < b.length){
		return false;
	}else if (a.length > b.length){
		return true;
	}else {
		if (a.thin > b.thin){
			return false;
		}else if (a.thin < b.thin){
			return true;
		}else {
			if (a.code < b.code){
				return false;
			}
			return true;
		}
	}
}
int n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].length >> a[i].thin >> a[i].code;
	}
	sort(a + 1, a + n + 1, cmp);
	cout << a[1].code;
}