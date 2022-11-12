//Created in Sat Nov 12 11:58:32 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
long long n;
int cnt;
int main(){
	cin>>n;
	while(true){
		if (n == 1){
			break;
		}else{
			if (n % 2 == 1){
				cout<<n<<" ";
				n = n*3 + 1;
				cnt++;
			}else{
				n = n/2.0;
			}
		}
	}
	if (cnt == 0){
		cout<<"No number can be output!"<<endl;
	}
}