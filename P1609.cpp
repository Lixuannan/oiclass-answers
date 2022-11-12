//Created in Sat Nov 12 09:25:33 2022
 //System: Darwin 22.1.0
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