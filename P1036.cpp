//Created in Fri Nov 11 16:15:54 2022
 //System: Darwin 22.1.0
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