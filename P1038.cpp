//Created in Fri Nov 11 15:12:31 2022
#include<iostream>
using namespace std;
int n, m, a;
int main(){
	cin>>n>>m;
	for (int i=1; i <= m; i++){
		if (m % i == 0 && n % i == 0 && i > a){
			a = i;
		}
	}
	cout<<a;
}