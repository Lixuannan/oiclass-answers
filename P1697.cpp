//Created in Fri Nov 11 15:24:34 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i = 2; i <= n; i++){
		if (n % i == 0 && n != i){
			cout<<"YES";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"NO";
}