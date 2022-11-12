//Created in Sat Nov 12 11:58:40 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int main(){
	cin >> n;
	for(int i=1; i <= n / 2; i++){
		cout << i << " " << n - i + 1 << " ";
	}
	if(n & 1){
		cout<< n / 2 + 1;
	}
}