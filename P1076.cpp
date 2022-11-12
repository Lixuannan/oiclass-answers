//Created in Sat Nov 12 11:58:36 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;

int sum;
char ch;
int n[26] = {1, 2, 3, 1, 2, 3, 
	1, 2, 3, 1, 2, 3, 1, 2, 3,
	1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main(){
	while (cin.get(ch)){
		if (ch == ' '){
			sum += 1;
		}else if (ch >= 'a' && ch <= 'z'){
			sum += n[ch - 'a'];
		}else{
			sum += 0;
		}
	}
	cout << sum;
}