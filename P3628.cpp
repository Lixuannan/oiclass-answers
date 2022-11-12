//Created in Sat Nov 12 11:59:07 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n,ans;
int main(){
	cin>>n;
	if (n % 2 == 0){
		for (int i=1; i <= n; i++){
			if (n % i == 0) ans += i;
		}
	}else{
		n -= 1;
		for (int i=2; i <= n; i+=2){
			ans += i;
		}
	}
	cout<<ans<<endl;
}