//Created in Fri Nov 11 14:30:43 2022
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