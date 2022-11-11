//Created in Fri Nov 11 16:16:18 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
long long  a,b,t;
int main(){
	cin>>a>>b;
	for (short i=0; i <= 9; i++){
		if (abs((10 * a + i + 1) - (b * 10)) <= 9){
			cout<<"Yes";
			return 0;
		}else{
			continue;
		}
	}
	cout<<"No";
}