//Created in Fri Nov 11 16:04:28 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int input, ge, shi,bai;
	cin>>input;
	bai = input / 100;
	shi = input / 10 % 10;
	ge = input % 10;
	cout<<ge<<shi<<bai;
}