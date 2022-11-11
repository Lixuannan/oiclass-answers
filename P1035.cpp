//Created in Fri Nov 11 15:12:30 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
long long tmp = 9999999999999999;
long long ans;
int main(){
	cin>>n;
	for (int i=0; i <= (int)sqrt(n) + 1; i++){
		if (abs(n - pow(2, i)) < tmp){
			tmp = abs(n - pow(2, i));
			ans = pow(2, i);
		}
	}
	cout<<ans;
}