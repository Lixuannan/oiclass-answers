//Created in Fri Nov 11 16:39:55 2022
 //System: Darwin 22.1.0
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