//Created in Sat Nov 12 09:25:40 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double sum_;
	int a,b;
	cin>>a>>b;
	sum_ += (a + b / 10.0);
	//cout<<sum_<<endl;
	cout<<(int)floor(sum_ / 11.10);
}