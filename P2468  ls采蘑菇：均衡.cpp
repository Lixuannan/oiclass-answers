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