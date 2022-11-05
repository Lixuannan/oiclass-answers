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