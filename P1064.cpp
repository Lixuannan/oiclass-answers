// Created in Sat Nov 12 16:27:13 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
long long p = 1, r, c;
string n[9999];
char in;

bool cmp(string a, string b){
	if (a.size() < b.size()){
		return true;
	}
	if (a.size() > b.size()){
		return false;
	}
	if (a.size() == b.size()){
		for (long long i=0; i <= a.size(); i++){
			if (a[i] < b[i]){
				return true;
			}else if (a[i] > b[i]){
				return false;
			}
		}
	}
}

int main(){
	cin >> r >> c;
	getchar();
	for (int i=1; i <= r; i++){
		for (int j=1; j <= c + 1; j++){
			in = getchar();
			if (in == '#' || in == '\n'){
				p += 1;
			}else {
				n[p] += in;
			}
		}
		getchar();
	}
	sort(n, n + 9998, cmp);
	for (int i=0; i <= 9998; i++){
		if (n[i] != ""){
			cout << n[i] << endl;
			return 0;
		}
	}
}