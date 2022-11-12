//Created in Sat Nov 12 11:58:37 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
string ain, bin;
int a[300], b[300], ans[300];
void str2int(int x[], string n){
	int p = 1;
	for (int i = n.size() - 1; i >= 0; i--){
		x[p++] = n[i] - '0';
	}
}
int main(){
	cin >> ain >> bin;
	str2int(a, ain);
	str2int(b, bin);
	for (int i = 0; i < 300; ++i) {
    	ans[i] += a[i] + b[i];
    	if (ans[i] >= 10) {
      		ans[i + 1] += 1;
      		ans[i] -= 10;
    	}
  }
	bool p = false;
	for (int i=300; i >= 1; i--){
		if (ans[i] != 0 && !p){
			p = true;
		}
		if (p){
			cout << ans[i];
		}
	}
}