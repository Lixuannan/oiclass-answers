//Created in Fri Nov 11 10:52:32 2022
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