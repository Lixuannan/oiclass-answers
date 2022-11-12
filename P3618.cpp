//Created in Sat Nov 12 11:59:07 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<iomanip>
using namespace std;
int n,m;
double sum;
int main(){
	cin>>n>>m;
	if (n < 2.5) sum += 6.0;
	else sum += 6.0 + (n - 2.5) * 1.2;
	if (m >= 5) sum += m / 5; 
	cout<<setprecision(1)<<fixed<<sum<<endl;
}