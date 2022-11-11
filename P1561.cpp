//Created in Fri Nov 11 16:40:00 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
long long a, b;
int main(){
	cin>>a>>b;
	for (int i=1; i <= min(a, b); i++){
		if (i * max(a,b) % min(a,b) == 0){
			cout<<i * max(a,b);
			return 0;
		}
	}
}