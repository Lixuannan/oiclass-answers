//Created in Fri Nov 11 16:16:06 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n,m,sum;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>m;
		sum += m;
	}
	if (sum % n == 0) cout<<n<<endl;
	else cout<<sum % n<<endl;
}