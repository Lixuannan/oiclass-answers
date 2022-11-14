// Created in Sat Nov 12 16:27:24 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n,m,sum;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>m;
		sum += m;
	}
	if (sum % n == 0) cout<<n<<endl;
	else cout<<sum % n<<endl;
}