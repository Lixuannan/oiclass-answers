#include<iostream>
using namespace std;
int ans,n,m;
int main(){
	cin>>n>>m;
	for (int i=1; i<=min(n,m); i++){
		ans += (n - i + 1) * (m - i + 1);
	}
	cout<<ans<<endl;
}