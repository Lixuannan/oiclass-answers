//Created in Fri Nov 11 16:16:23 2022
 //System: Darwin 22.1.0
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