//Created in Sat Nov 12 09:25:29 2022
 //System: Darwin 22.1.0
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