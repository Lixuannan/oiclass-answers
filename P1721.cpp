//Created in Fri Nov 11 15:24:35 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int cnt;
int main(){
	cin>>n;
	if (n % 10 == 5){
		while(n % 5 == 0){
			cnt++;
			n /= 5;
		}
	}else{
		while(n >= 0.1){
			if (n % 10 == 0){
				cnt ++;
				n /= 10;
			}else{
				n /= 10;
			}
		}
	}
	cout<<cnt<<endl;
}