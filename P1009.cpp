//Created in Sat Nov 12 09:25:18 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	if (time - 12 >= 0){
		cout<<time - 12;
	}
	else{
		cout<<time + 12;
	}
}