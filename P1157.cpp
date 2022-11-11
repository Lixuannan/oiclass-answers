//Created in Fri Nov 11 16:16:01 2022
 //System: Darwin 22.1.0
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