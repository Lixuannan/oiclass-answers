//Created in Fri Nov 11 15:25:04 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long x,y,z;
int main(){
	cin>>x>>z;
	for (y=1; y <= 2147483647; y++){
		if (x * y % z == 0){
			cout<<y;
			return 0;
		}
	}
}