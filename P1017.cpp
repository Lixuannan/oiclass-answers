//Created in Sat Nov 12 09:25:19 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int n, ans=1;
	cin>>n;
	if (n % 2 == 0){
		n-=1;
	}
	while(!(n <= 1)){
		ans *= n;
		n -= 2;
	}
	cout<<ans;
}