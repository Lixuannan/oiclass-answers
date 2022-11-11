//Created in Fri Nov 11 11:49:44 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n * 2 - 1) - (i * 2 - 1)) / 2; j++) cout<<" ";
		for (int j=1; j <= (i * 2) - 1; j++) cout<<"*";
		cout<<endl;
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= ((n - 1) * 2 + 1 - 1) / 2; j++) cout<<" ";
		cout<<"*";
		for (int j=1; j <= (n - 1) / 2; j++) cout<<" ";
		cout<<"\n";
	}
}