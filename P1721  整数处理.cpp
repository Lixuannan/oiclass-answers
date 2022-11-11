//Created in Fri Nov 11 10:52:16 2022
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