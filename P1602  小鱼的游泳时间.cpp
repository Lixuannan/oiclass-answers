//Created in Fri Nov 11 10:52:15 2022
#include<iostream>
using namespace std;
int t,a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d;
	t = (c * 60 + d) - (a * 60 + b);
	e = t / 60;
	f = t - e * 60;
	cout<<e<<" "<<f;
}