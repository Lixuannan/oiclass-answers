//Created in Fri Nov 11 11:49:14 2022
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