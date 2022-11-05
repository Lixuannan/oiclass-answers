#include<iostream>
using namespace std;
int n,t,cnt;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		t = i;
		while (t > 0){
			if (t % 10 == 1){
				cnt ++;
			}
			t /= 10;
		}
	}
	cout<<cnt;
}