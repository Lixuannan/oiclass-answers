//Created in Fri Nov 11 15:02:45 2022
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