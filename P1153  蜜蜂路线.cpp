//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
long long n, m, a=1, b=1, c=1;

int main(){
	cin>>n>>m;
	for (int i=1; i <= m - n - 1; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}