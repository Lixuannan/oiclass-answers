//Created in Sat Nov 12 11:58:43 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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