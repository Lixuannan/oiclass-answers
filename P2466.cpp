//Created in Sat Nov 12 08:45:24 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, in, len;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (i == in){
			len += in;
		}
	}
	cout << len - 99;
}