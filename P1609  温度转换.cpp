#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f, c;
	//   f=9/5*c+32
	cin>>c;
	f = 1.8*c+32;
	cout<<setprecision(2)<<fixed<<f;
}