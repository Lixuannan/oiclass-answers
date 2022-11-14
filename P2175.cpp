// Created in Sat Nov 12 16:27:33 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int n,sum,cnt;
bool isprime(int n){
	for (int i=2; i <= ceilf(sqrt(n)); i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	cin>>n;
	sum++;
	for (int i=1; i <= n; i ++)	{
		if (isprime(i)){
			sum += i;
			cnt ++;
		}
	}
	cout<<cnt<<" "<<sum;
}