//Created in Fri Nov 11 10:52:29 2022
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