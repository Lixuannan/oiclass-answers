//Created in Wed Nov  9 16:21:53 2022
#include<iostream>
using namespace std;
int n,m,sum;
int main(){
	cin>>m>>n;
	for (int i=m; i <= n; i++){
		if (i % 2 == 0){
			for (int j=3; j <= i; j++){
				if (i % j == 0 && j < i){
					sum += j;
				}
			} 
			sum += 2;
		}
		sum ++;
		if (sum == i){
			cout<<i<<endl;
		}
		sum = 0;
	}
}