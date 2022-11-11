//Created in Fri Nov 11 13:59:31 2022
#include<iostream>
using namespace std;
int n;
int main(){
	cin >> n;
	for(int i=1; i <= n / 2; i++){
		cout << i << " " << n - i + 1 << " ";
	}
	if(n & 1){
		cout<< n / 2 + 1;
	}
}