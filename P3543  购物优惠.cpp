//Created in Fri Nov 11 10:52:28 2022
#include<iostream>
using namespace std;
int n=0,in=0;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>in;
		if (in > 0 && in < 50) cout<<in<<endl;
		else if (in >= 50 && in < 100) cout<<in-10<<endl;
		else if (in >= 100 && in < 200) cout<<in - 20<<endl;
		else if (in >= 200) cout<<in-40<<endl;
	}
}