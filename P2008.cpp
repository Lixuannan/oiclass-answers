//Created in Sat Nov 12 09:25:37 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
	if (90<=m&&m<=100) cout<<"A";
	else{
		if (80<=m&&m<90) cout<<"B";
		else{
			if (70<=m&&m<80) cout<<"C";
			else{
				if (60<=m&&m<70) cout<<"D";
				else{
					if (m<60) cout<<"E";
				}
			}
		}
	}	
}