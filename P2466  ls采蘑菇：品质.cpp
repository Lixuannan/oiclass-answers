//Created in Fri Nov 11 10:52:22 2022
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