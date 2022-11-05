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