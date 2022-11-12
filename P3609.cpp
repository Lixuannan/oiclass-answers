//Created in Sat Nov 12 11:59:06 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long a,b;
int main(){
	cin>>a>>b;
	if (a == b){
		cout<<"No"<<endl;
		return 0;
	}
	if (b > a) swap(a,b);
    if(a<=5){
        if((a-b)-(5-a)>2)cout<<"No";
        else cout<<"Yes";
    }else{
        if(a==b+1)cout<<"Yes";
        else cout<<"No";
    }
}