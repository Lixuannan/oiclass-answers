//Created in Sat Nov 12 11:59:12 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int m,t,u,f,d,in,time_,lengh;
int main(){
	cin>>m>>t>>u>>f>>d;
	for (int i=1; i <= t; i++){
		cin>>in;
		switch (in){
			case 1:{
				if ((time_ + u <= m)){
					time_ += u;
					lengh += 1;
				}
				break;
			}
			case 2:{
				if ((time_ + f <= m)){
					time_ += f;
					lengh += 1;
				}
				break;
			}
			case 3:{
				if ((time_ + d <= m)){
					time_ += d;
					lengh += 1;
				}
				break;
			}
		}
		// cout<<time_<<"	"<<lengh<<endl;
	}
	cout<<lengh<<endl;
}