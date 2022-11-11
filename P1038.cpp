//Created in Fri Nov 11 16:39:45 2022
 //System: Darwin 22.1.0
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