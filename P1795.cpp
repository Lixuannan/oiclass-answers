//Created in Fri Nov 11 15:24:35 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
bool p=false;
int n,i,a[1000];
int main(){
	cin>>n;
	while (n > 0){
		a[i] = n % 2;
		i ++;
		n /= 2;
	}
	for (int i=999; i >= 0; i--){
		// cout<<p<<endl;
		if (a[i] == 0 && !p) continue;
		else p = true;
		if (p) cout<<a[i];
	}
}