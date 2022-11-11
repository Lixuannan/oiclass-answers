//Created in Fri Nov 11 14:30:57 2022
#include<iostream>
using namespace std;
bool a[1001];
int n,m,r,p,cnt;
int main(){
	cin>>n>>m;
	r=n;
	while(r > 1){
		// cout<<"in "<<p<<endl;
		p++;
		// cout<<a[p]<<endl;
		if (p > n) p = 1;
		if (!a[p]){
			cnt++;
			if (cnt == m){
				a[p] = true;
				r--;
				cnt=0; //黑历史 
			}
		}
	}
	for (int i=1; i <= n; i++){
		if (a[i] == false) cout<<i;
	}
}