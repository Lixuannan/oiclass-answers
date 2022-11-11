//Created in Fri Nov 11 16:04:05 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int in, act, time123, ans;
int main(){
	cin>>time123;
	for (act=1; act<=time123; act++){
		cin>>in;
		if (in != act){
			ans += 1;
		}
	}
	cout<<ans;
}