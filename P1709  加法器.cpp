//Created in Fri Nov 11 10:52:16 2022
#include<iostream>
using namespace std;
int exp, exp1;
int main(){
	while(true){
		cin>>exp>>exp1;
		if (exp == 0 && exp1 == 0){
			break;
		}else{
			cout<<exp+exp1<<endl;
		}
	}
}