//Created in Fri Nov 11 16:04:03 2022
 //System: Darwin 22.1.0
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