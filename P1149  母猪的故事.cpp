//Created in Fri Nov 11 14:18:47 2022
#include<iostream>
using namespace std;
int n,a=1,b=1,c=1;
int main(){
	cin>>n;
	for (int i=1; i < n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}