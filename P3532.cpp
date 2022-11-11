//Created in Fri Nov 11 16:40:16 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int h,m,s,si;
	cin>>si;
	h = (si - si % 3600) / 3600;
	m = ((si - h * 3600) - (si - h * 3600) % 60) / 60;
	s = si - h * 3600 - m * 60;
	cout<<h<<':'<<m<<':'<<s;
}