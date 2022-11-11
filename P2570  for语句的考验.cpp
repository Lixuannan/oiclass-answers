//Created in Fri Nov 11 13:59:48 2022
#include<iostream>
using namespace std;
int n,sum;
int main(){
	cin>>n;
	if (n % 2 == 1){
		for (int i = n-1; i > 0; i-=2){
			sum += i;
		}
	}else{
		for (int i=1; i <= n; i++){
			if (n % i == 0){
				sum += i;
			}
		}
	}
	cout<<sum;
}