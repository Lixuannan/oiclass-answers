//Created in Fri Nov 11 14:31:16 2022
#include<iostream>
using namespace std;
int n,x,y,in,sum,max_=-999999,min_=999999;
int main(){
	cin>>x>>y>>n;
	int a[n];
	for (int i=0; i < n; i++){
		cin>>in;
		if (in < x || in > y) a[i] = 0;
		else {
			sum += in;
			a[i] = in;
		}
	}
	for (int i=0; i < n; i++){
		if (a[i] > max_ && a[i] != 0) max_ = a[i];
		if (a[i] < min_ && a[i] != 0) min_ = a[i];
		// cout<<sum<<"\t"<<max_<<"\t"<<min_<<endl;
	}
	for (int i=0; i < n; i++){
		if (a[i] == max_) sum -= a[i];
		else if (a[i] == min_) sum -= a[i];
	}
	// cout<<sum<<"\t"<<max_<<"\t"<<min_<<endl;
	cout<<sum<<endl;
}