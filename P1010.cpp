//Created in Fri Nov 11 14:55:58 2022
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if (b & a == 0){
		cout<<b/a;
	}
	else{
		cout<<b/a +1;
	}
}