//Created in Fri Nov 11 13:59:21 2022
#include<iostream>
using namespace std;
int main(){
	double s;
	cin>>s;
	if (s<=2.5){
		cout<<10;
	}
	else{
		cout<<(int)(10 + (s - 2.5) * 2.6 + 0.5);
	}
}