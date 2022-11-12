//Created in Sat Nov 12 09:25:35 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n,m,cnt;
int main(){
	cin>>n;
	int a[n];
	for (int i=0; i < n; i++){
		cin>>a[i];
	}
	cin>>m;
	for (int i=0; i < n; i++){
		if (a[i] == m) cnt++;
		else continue;
	}
	cout<<cnt;
}