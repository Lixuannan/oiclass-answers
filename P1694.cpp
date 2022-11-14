// Created in Sat Nov 12 16:27:25 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
struct file{
	int num;
	string filename, basename, extraname;
	void init(){
		int idx = filename.find('.');
		if (idx != filename.npos){
			basename = filename.substr(0, idx);
			extraname = filename.substr(idx + 1);
		}else {
			basename = filename;
		}
		// cout << filename << " " << basename << " " << extraname << endl;
	}
} a[101];

bool cmp(file a, file b){
	if (a.extraname == "" || b.extraname == ""){
		if (a.extraname != ""){
			return true;
		}
		if (b.extraname != ""){
			return false;
		}
		return a.basename < b.basename;
	}
	if (a.extraname != b.extraname){
		return a.extraname < b.extraname;
	}
	return a.basename < b.basename;
}

int n;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i].filename;
		a[i].init();
		a[i].num = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i=1; i <= n; i++){
		// cout << a[i].filename << " ";
		cout << a[i].num << endl;
	}
}