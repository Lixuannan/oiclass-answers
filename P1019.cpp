//Created in Fri Nov 11 14:56:00 2022
#include<iostream>
using namespace std;
int main(){
	int m,ans = 1;
	cin>>m;
	while(true){
		if (m!=1){
			ans = (ans+1) * 2;
			m-=1;
		}else{
			break;
		}
	}
	cout<<ans;
}