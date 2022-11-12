//Created in Sat Nov 12 08:44:46 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int a[10],in,cnt;
int main(){
	for (int i=0; i < 10; i++){
		cin>>a[i];
	}
	cin>>in;
	for (int i=0; i < 10; i++){
		if (a[i] <= in + 30) cnt++;
		else continue;
	}
	cout<<cnt;
}