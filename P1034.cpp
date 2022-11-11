//Created in Fri Nov 11 16:39:45 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int ans;
int main(){
	cin>>n;
	ans += n;
	while (n > 2){
		ans += n / 3;
		n = n / 3 + n % 3;
	}
	cout<<ans;
}