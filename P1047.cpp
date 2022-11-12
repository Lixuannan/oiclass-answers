//Created in Sat Nov 12 11:58:33 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long d,sum;
int n,cnt,i;
int main(){
	cin>>d>>n;
    short a[n];
	for (int i=0; i < n; i++){
		cin>>a[i];
		sum += a[i];
	}
	cnt += d / sum * n;
	d %= sum;
	while(d > 0){
		cnt ++;
		d -= a[i % n];
		i++;
	}
	cout<<cnt;
}