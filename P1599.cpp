//Created in Fri Nov 11 16:04:20 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n,sum,max_,min_ = 999999;
int main(){
	for (int i=1; i <= 12; i++){
		cin>>n;
		if (n < min_) min_ = n;
		if (n > max_) max_ = n;
		sum += n;
	}
	cout<<(sum - max_ - min_) / 10;
}