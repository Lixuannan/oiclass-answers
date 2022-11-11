//Created in Fri Nov 11 16:15:53 2022
 //System: Darwin 22.1.0
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