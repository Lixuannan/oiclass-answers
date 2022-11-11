//Created in Fri Nov 11 16:39:44 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	long long  n, m, k;
	cin>>n>>m>>k;
	for (int i=k; i<=n; i+=m){
		cout<<i<<" ";
	}
}