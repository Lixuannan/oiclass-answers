//Created in Fri Nov 11 15:24:27 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>
using namespace std;
long long a[100001];
int main(){
	long long n,i,l,k,cnt=0;
	cin>>n>>l>>k;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++){
		if(l>=a[i]){
			cnt++;
			l+=k;
		}else{
			break;
		}
	}
	cout<<cnt;
}