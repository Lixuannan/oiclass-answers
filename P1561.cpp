//Created in Fri Nov 11 14:56:18 2022
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