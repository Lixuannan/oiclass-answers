//Created in Fri Nov 11 11:49:14 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n;
int cnt;
int main(){
	cin>>n;
	if (n <= 0){
		cout<<"-";
		n = abs(n);
	}
	n *= 10;
	while(n > 1.0000000001){
		if (cnt == 0 || n / 10 <= 0){
			if (n / 10 % 10 != 0){
				cout<<n / 10 % 10;
				n /= 10;
				cnt++;
			}else{
				n /= 10;
				continue;
			}
		}else{
			cout<<n / 10 % 10;
			n /= 10;
			cnt++;
		}
		
	}
	return 0;
}