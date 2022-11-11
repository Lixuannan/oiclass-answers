//Created in Fri Nov 11 11:49:25 2022
#include<iostream>
using namespace std;
long long a=1,b=1,c=1,in;
int main(){
	cin>>in;
	for (int i=1; i < in - 1; i++){
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c;
}