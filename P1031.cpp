//Created in Fri Nov 11 14:56:01 2022
#include<iostream>
using namespace std;
int main(){
	for (int i=1000; i<10000; i++){
		if ((i/1000%10)*(i/1000%10)*(i/1000%10)*(i/1000%10)+(i/100%10)*(i/100%10)*(i/100%10)*(i/100%10) + (i/10%10)*(i/10%10)*(i/10%10)*(i/10%10) + (i/1%10)*(i/1%10)*(i/1%10)*(i/1%10) == i){
			cout<<i<<endl;
		}
	}
}