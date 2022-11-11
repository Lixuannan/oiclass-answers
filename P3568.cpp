//Created in Fri Nov 11 16:40:17 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long n,ans,ans1;
int main(){
	cin>>n;
	ans = 1;
	ans1 = 3;
	for (int i=2; i <= n; i++){
		ans += i * 2 - 1;
		ans1 += i * 3;
	}
	cout<<ans<<"\n"<<ans1<<endl;
}