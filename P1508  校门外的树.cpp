//Created in Fri Nov 11 11:49:28 2022
#include<iostream>
using namespace std;
int l,m,in1,in2,cnt,sum;
bool a[10001];
int main(){
	cin>>l>>m;
	for (int i=1; i <= m; i++){
		cin>>in1>>in2;
		for (int j=in1; j <= in2; j++){
			// cout<<j<<endl;
			a[j] = true;
		}
	}
	for (int i=0; i <= l; i++){
		// cout<<a[i];
		if (a[i] == false) cnt ++;
	}
	cout<<cnt;
}