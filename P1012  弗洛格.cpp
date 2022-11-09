//Created in Wed Nov  9 16:21:39 2022
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