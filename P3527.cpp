//Created in Sat Nov 12 08:45:37 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int pow(int a, int b){
	if (b == 0){
		return 1;
	}
	register int ans = 1;
	for (int i=1; i <= b; i++){
		ans *= a;
	}
	return ans;
}
int main(){
	cin >> n;
	while (n > 0){
		for (int i=16; i >= 0; i--){
			register int tmp = pow(2, i);
			if (tmp <= n){
				n -= tmp;
				cout << "2 " << i << endl;
			}
		}
	}
}