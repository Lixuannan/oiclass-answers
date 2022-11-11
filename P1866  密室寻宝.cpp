//Created in Fri Nov 11 13:59:41 2022
#include<iostream>
using namespace std;
unsigned short p, q, n, cnt;
int main(){
	cin >> p >> q;
	n = p & q;
	for (int i=1; i <= 8; i++){
		if (n & 1){
			cout << i << " ";
			cnt += 1;
		}
		n >>= 1;
	}
	if (cnt >= 2){
		cout << endl << "Yes";
	}else if (cnt == 1){
		cout << endl << "NO";
	}else{
		cout << "0" << endl << "NO";
	}
}