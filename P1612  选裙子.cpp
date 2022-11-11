//Created in Fri Nov 11 14:18:53 2022
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