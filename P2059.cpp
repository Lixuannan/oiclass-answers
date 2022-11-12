//Created in Sat Nov 12 11:58:51 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, cnt;
string t, tmp;
int main(){
	cin >> n;
	cin >> tmp;
	for (int i=1; i < n; i++){
		cin >> t;
		if (t != tmp){
			cnt += 1;
		}
		tmp = t;
	}
	cout << cnt + 1;
}