//Created in Fri Nov 11 14:30:44 2022
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