//Created in Wed Nov  9 16:21:40 2022
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