//Created in Sat Nov 12 08:44:11 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double ton;
	cin>>ton;
	if (ton <= 40){
		cout<<setprecision(2)<<fixed<<ton*2.0;
		}
	else{
		cout<<setprecision(2)<<fixed<<40*2.0 + (ton - 40) * 2.4;
	}
}