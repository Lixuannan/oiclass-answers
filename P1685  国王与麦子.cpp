//Created in Fri Nov 11 13:59:38 2022
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