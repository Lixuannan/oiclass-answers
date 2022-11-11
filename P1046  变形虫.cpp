//Created in Fri Nov 11 13:59:24 2022
#include<iostream>
using namespace std;
int a, n, w;
int main(){
	cin>>a>>n;
	for (int i=1; i <= n; i++){
		cin>>w;
		if (w == a){
			a *= 2;
		}else{
			continue;
		}
	}
	cout<<a;
}