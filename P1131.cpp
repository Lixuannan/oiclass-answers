//Created in Sat Nov 12 11:58:39 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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