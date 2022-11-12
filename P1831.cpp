//Created in Sat Nov 12 11:58:48 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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