//Created in Sat Nov 12 08:44:18 2022
 //System: Darwin 22.1.0
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