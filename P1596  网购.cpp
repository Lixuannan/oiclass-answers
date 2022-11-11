//Created in Fri Nov 11 11:49:29 2022
#include<iostream>
using namespace std;
int x,y,n,price,ans;
int main(){
	cin>>x>>y>>n;
	for (int i=1; i <= n; i++){
		cin>>price;
		if (price >= x && price <= y) ans += 1;
	}
	cout<<ans;
}