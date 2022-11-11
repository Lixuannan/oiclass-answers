//Created in Fri Nov 11 16:04:05 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int input, ans = 0;
	cin>>input;
	for (int i=input; i>0; i--){
		ans += (1 + i)*i/2;
	}
	cout<<ans;
}