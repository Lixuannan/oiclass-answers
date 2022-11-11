//Created in Fri Nov 11 11:49:48 2022
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