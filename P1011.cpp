//Created in Fri Nov 11 16:15:52 2022
 //System: Darwin 22.1.0
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