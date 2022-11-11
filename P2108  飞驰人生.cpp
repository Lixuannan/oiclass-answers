//Created in Fri Nov 11 10:52:19 2022
#include<iostream>
#include<cmath>
using namespace std;
int n, k, ptr;
bool p[9999999];
int main(){
	cin >> n;
	k = ptr = n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=2; i <= ceil(sqrt(2 * n)); i++){
		if (!p[i]){
			for (int j=2; i * j <= 2 * n; j++){
				p[i * j] = true;
			}
		}
	}
	while (p[k]){
		k += 1;
	}
	while (p[ptr]){
		ptr -= 1;
	}
	k -= ptr;
//	for (int i=1; i <= 2 * n; i++){
//		if (!p[i]) cout << i << endl;
//	}
	cout << k;
}