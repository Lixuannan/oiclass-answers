//Created in Sat Nov 12 11:58:47 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int g(int n){
	if (n == 0){
		return 0;
	}
	return n - g(g(n - 1));
}

int main(){
	int n;
	cin >> n;
	cout << g(n);
}