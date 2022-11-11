//Created in Fri Nov 11 15:02:31 2022
#include<iostream>
using namespace std;
int a,b,h,t,p;
int main(){
	cin>>a>>b>>h;
	while(p<h){
		p += a;
		if (p >= h){
			t++;
			break;
		}
		p -= b;
		t++;
	}
	cout<<t<<endl;
}