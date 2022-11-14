// Created in Sat Nov 12 16:27:14 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, inde;
string str, ans;
int main(){
	cin >> n;
	for (int i=0; i <= n; i++){
		getline(cin, str);
		str.erase(0, str.rfind('@') + 1);
		while(str.find('#') != str.npos){
			if (str.find('#') == 0){
				str.erase(0, 1);
			}else{
				str.erase(str.find('#')-1, 2);
			}
		}
		if (!str.empty()){
			ans += str + '\n';
		}
	}
	cout << ans;
}