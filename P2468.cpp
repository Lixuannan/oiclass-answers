//Created in Sat Nov 12 09:25:42 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, l, r, in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in % 2 == 0){
			r += in;
		}else{
			l += in;
		}
	}
	cout << l << " " << r;
}