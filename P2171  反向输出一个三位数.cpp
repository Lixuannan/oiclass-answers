//Created in Fri Nov 11 10:52:20 2022
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