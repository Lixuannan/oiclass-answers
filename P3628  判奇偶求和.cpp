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