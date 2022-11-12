//Created in Sat Nov 12 09:25:21 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
int l, r, cnt;
bool p[100000000];
int main(){
	cin >> l >> r;
	p[0] = p[1] = true;
	for (int i = 2; i <= ceilf(sqrt(r)); i++) {
		if (!p[i]){
			for (int j = 2; j * i <= r; j++) {
				p[j * i] = true;
			}
		}
	}
	for (int i=l; i <= r; i++){
		cnt += !p[i];
	}
	cout << cnt;
}