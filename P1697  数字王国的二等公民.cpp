//Created in Fri Nov 11 10:52:16 2022
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