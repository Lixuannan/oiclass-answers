//Created in Fri Nov 11 15:12:30 2022
#include<iostream>
#include<cmath>
using namespace std;
long long a[100854],n,m;
int main(){
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long k=floor((double)sum/(double)n);
	long long g=sum-k*n;
	if(g<k){
		k--;
		g+=n;
	}
	cout<<k<<endl<<g;
	return 0;
}