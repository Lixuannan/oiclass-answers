// Created in Sat Nov 12 16:27:22 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int l,m,in1,in2,cnt,sum;
bool a[10001];
int main(){
	cin>>l>>m;
	for (int i=1; i <= m; i++){
		cin>>in1>>in2;
		for (int j=in1; j <= in2; j++){
			// cout<<j<<endl;
			a[j] = true;
		}
	}
	for (int i=0; i <= l; i++){
		// cout<<a[i];
		if (a[i] == false) cnt ++;
	}
	cout<<cnt;
}