//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int x, a[9999], b[9999], n;
int main(){
	cin >> x;
	for (int i=1; i <= x; i++){
		cin >> a[i] >> b[i];
	}
	cin >> n;
	for (int i=1; i <= x; i++){
		if (a[i] >= b[i]){
			cout <<  "done\n";
		}else if (b[i] - a[i] > n){
			cout << "-1\n";
		}else{
			cout << b[i] - a[i] << endl;
		}
	}
}