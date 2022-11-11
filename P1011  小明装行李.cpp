//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	long long m,n;
	cin>>m>>n;
	if (m % n == 0){
		cout<<m/n;
	}
	else{
		cout<<(m - m%n) / n +1;
	}
}