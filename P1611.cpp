//Created in Sat Nov 12 11:58:46 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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