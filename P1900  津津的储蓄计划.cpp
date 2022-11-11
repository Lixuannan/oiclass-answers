//Created in Fri Nov 11 14:31:03 2022
#include<iostream>
using namespace std;
int in, n, r;
int  main(){
	for (int i=1; i <= 12; i++){
		cin>>in;
		n += 300 - in;
		if (n < 0){
			cout<<-i;
			return 0;
		}
		r += n / 100;
		n -= n / 100 * 100;
	}
	cout<<r * 120 + n;
}