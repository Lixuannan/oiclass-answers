//Created in Sat Nov 12 11:58:45 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
long long n, tmp, ans;
int main(){
	cin>>n;
	while(n != 153){
		for (int i=0; i < 5; i++){
			tmp += (long long)pow(n / (long long)pow(10, i) 
			% 10, 3);
		}
		n = tmp;
		tmp = 0;
		ans += 1;
	}
	cout<<ans;
}