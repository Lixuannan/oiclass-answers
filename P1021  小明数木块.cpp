//Created in Fri Nov 11 14:18:37 2022
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