//Created in Fri Nov 11 15:12:43 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	for (int i=2; i <= n; i++){
		if (i*i % 10 == i 
		|| i*i / 10 % 10 * 10 + i*i % 10 == i
		|| i * i /100 % 10 * 100 + i*i / 10 % 10 * 10 + i*i % 10 == i){
			cout<<i<<" ";
		}
	}
}