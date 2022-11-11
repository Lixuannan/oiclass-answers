//Created in Fri Nov 11 14:18:38 2022
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