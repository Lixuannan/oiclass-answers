//Created in Fri Nov 11 14:56:00 2022
#include<iostream>
using namespace std;
int main(){
	long long  n, m, k;
	cin>>n>>m>>k;
	for (int i=k; i<=n; i+=m){
		cout<<i<<" ";
	}
}