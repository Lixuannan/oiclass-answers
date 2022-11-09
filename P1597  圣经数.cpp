//Created in Wed Nov  9 16:21:52 2022
#include<iostream>
#include<cmath>
using namespace std;
long long n, tmp, ans;
int main(){
	cin>>n;
	while(n != 153){
		for (int i=0; i < 5; i++){
			tmp += (long long)pow(n / (long long)pow(10, i) 
			% 10, 3);
		}
		n = tmp;
		tmp = 0;
		ans += 1;
	}
	cout<<ans;
}