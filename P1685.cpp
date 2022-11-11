//Created in Fri Nov 11 15:24:34 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long ans=1;
	for (int i=n; i>1; i--){
		ans *= 2;
	}
	cout<<ans;
}