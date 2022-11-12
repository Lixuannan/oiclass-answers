//Created in Sat Nov 12 08:44:32 2022
 //System: Darwin 22.1.0
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