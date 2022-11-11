//Created in Fri Nov 11 16:39:44 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int r,n,a[202],p,ans;
using namespace std;
int main(){
	cin>>r>>n;
	for (int i=n; n>0; n--){
		cin>>a[i];
		p+=a[i];
		if (abs(p) <= r){
			ans += 1;
		}
	}
	cout<<ans;
}