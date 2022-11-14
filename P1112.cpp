// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
long long a[100001];
int main(){
	long long n,i,l,k,cnt=0;
	cin>>n>>l>>k;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++){
		if(l>=a[i]){
			cnt++;
			l+=k;
		}else{
			break;
		}
	}
	cout<<cnt;
}