//Created in Sat Nov 12 11:58:32 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
long long l, r;
using namespace std;
int main(){
	cin>>l>>r;
	for (int i=1 ; i<=4; i++){
		if (l / (long long)pow(10, i) + l % (long long)pow(10, i) == r){
			cout<<l / (long long)pow(10, i)<<"+"<<l % (long long)pow(10, i)<<"="<<r;
			return 0;
		}else{
			continue;
		}
	}
	cout<<"Impossible!"<<endl;
}