//Created in Fri Nov 11 16:16:17 2022
 //System: Darwin 22.1.0
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