//Created in Sat Nov 12 11:58:32 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int k;
int t;
int main(){
	cin>>k;
	for (int i = 10000; i <= 30000; i++){
		if (i / 100 % k == 0 && i / 10 % 1000 % k == 0 && 
		i % 1000 % k == 0){
			cout<<i<<endl;
			t+=1;
		}
	}
	if (t == 0){
		cout<<"No"<<endl;
	}
}