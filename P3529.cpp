//Created in Fri Nov 11 16:16:21 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
string f(int n){
	if (n == 1){
		return "A";
	}
	return f(n - 1) + char (n + 'A' - 1) + f(n - 1);
}
int n;
int main(){
	cin >> n;
	cout << f(n);
}