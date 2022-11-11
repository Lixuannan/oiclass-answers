//Created in Fri Nov 11 14:18:55 2022
#include<iostream>
#include<cmath>
using namespace std;
bool p[999999999];
long long n, maxr, l[999999], r[999999], a[99999999];
int main(){
	cin >> n;
	p[2] = false;
	p[0] = p[1] = true;
	for (int i=1; i <= n; i++){
		cin >> l[i] >> r[i];
		maxr = max(maxr, r[i]);
	}
	for (int i=2; i <= ceil(sqrt(maxr)); i++){
		if (!p[i]){
			for (int j=2; i * j <= maxr; j++){
				p[i * j] = true;
			}
		}
	}
	for (int i=1; i <= maxr; i++){
		a[i] = a[i - 1] + !p[i];
	}
	for (int i=1; i <= n; i++){
		cout << a[r[i]] - a[l[i] - 1] << endl;
	}
}