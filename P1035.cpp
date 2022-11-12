//Created in Sat Nov 12 11:58:32 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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