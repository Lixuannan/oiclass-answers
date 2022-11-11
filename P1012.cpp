//Created in Fri Nov 11 16:39:42 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n > 27){
		cout<<30 - (n - 27)%30;
	}
	else{
		if (n == 27){
			cout<<1;
		}
		else{
			cout<<27 - n;
		}
	}
}