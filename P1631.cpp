//Created in Fri Nov 11 14:56:22 2022
#include<iostream>
#include<cmath>
using namespace std;
int n,k;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		for(int t=i; t <= i*2-1; t++){
			k = t;
			if (k >= 10){
				cout<<(k-10) % 10;
				continue;
			}
			cout<<k;
		}
		for(int j=i*2-1; j > i; j--){
			k = j;
			// cout<<k<<endl;
			if (k >= 11){
				cout<<(abs(k-11)) % 10;
				continue;
			}
			cout<<(k-1)  % 10;
		}
		cout<<endl;
	}
}