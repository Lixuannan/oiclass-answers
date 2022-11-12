//Created in Sat Nov 12 11:59:08 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
int n, m, cnt, cont, h[99999], l[99999];
int main(){
	cin >> n >> m;
	for (int i=1; i <= n; i++){
		cin >> h[i];
	}
	for (int i=1; i <= m; i++){
		cin >> l[i];
	}
	sort(h + 1, h + n + 1);
	sort(l + 1, l + m + 1);
	for (int i=1; i <= m; i++){
		cont = 0;
		for (int j=1; j <= n; j++){
			if (l[i] >= h[j] && h[j] > -1){
				cont += 1;
				cnt += 1;
				// cout << l[i] <<  " " << h[i] << " " << cnt << endl;
				h[j] = -1;
				if (cont >= 2){
					break;
				}
			}
		}
	}
	cout << cnt;
}