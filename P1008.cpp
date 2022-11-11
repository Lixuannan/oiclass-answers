//Created in Fri Nov 11 15:02:14 2022
#include<iostream>
using namespace std;
int main(){
	int father, mother, n;
	cin>>father>>mother>>n;
	if (n == 0){
		int a = (father + mother -13);
		if (a % 2 == 1){
			cout<<(a - 1) / 2;
		}
		else{
			cout<<a / 2;
		}
	}
	else{
		int a = (father + mother +13);
		if (a % 2 == 1){
			cout<<(a - 1) / 2;
		}
		else{
			cout<<a / 2;
		}
	}
}