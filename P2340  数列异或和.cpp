//Created in Fri Nov 11 14:19:00 2022
#include<iostream>
using namespace std;
unsigned long long n, ans;
int main(){
	cin >> n;
	if (n % 4 == 1){
		ans = 1;
	}else if (n % 4 == 2){
		ans = n + 1;
	}else if (n % 4 == 3){
		ans = 0;
	}else if (n % 4 == 0){
		ans = n;
	}
	cout << ans;
}