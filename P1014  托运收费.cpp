//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double weight, cost;
	cin>>weight;
	if (weight<=10){
		cout<<setprecision(2)<<fixed<<2.5;
	}
	else{
		cout<<setprecision(2)<<fixed<<2.5 + (weight - 10) * 1.5;
	}
}