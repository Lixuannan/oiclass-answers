//Created in Fri Nov 11 10:52:17 2022
#include<iostream>
using namespace std;
int main(){
	int yyyy,mm;
	cin>>yyyy>>mm;
	if ((yyyy%4==0&&yyyy%100!=0)||yyyy%400==0){
		if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) {
		cout<<31;
		return 0;
		}
		if(mm==2){
			cout<<29;
		}else{
			cout<<30;
		}
	}else{
		if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) {
		cout<<31;
		return 0;
	}
			if(mm==2){
			cout<<28;
		}else{
			cout<<30;
		}
	}
}