//Created in Fri Nov 11 16:15:52 2022
 //System: Darwin 22.1.0
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