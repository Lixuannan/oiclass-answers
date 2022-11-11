//Created in Fri Nov 11 15:24:43 2022
 //System: Darwin 22.1.0
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