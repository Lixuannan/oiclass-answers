//Created in Fri Nov 11 11:49:31 2022
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