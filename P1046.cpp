//Created in Sat Nov 12 08:44:18 2022
 //System: Darwin 22.1.0
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