//Created in Fri Nov 11 15:24:28 2022
 //System: Darwin 22.1.0
#include <iostream>
using namespace std;
int k, n, t;
int main(){
	cin >> k;
	for(int i = k + 1; i <= 2 * k; i++){
		t = 0;
		if(k * i % (i - k) == 0){
			n = k * i / (i - k);
			t = 1;
			cout<< "1/" << k << "=" << "1/" << i << "+1/" << n << endl;
		} 
	}
}