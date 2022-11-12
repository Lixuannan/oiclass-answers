//Created in Sat Nov 12 09:25:34 2022
 //System: Darwin 22.1.0
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