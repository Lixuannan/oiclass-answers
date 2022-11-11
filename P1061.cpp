//Created in Fri Nov 11 15:12:33 2022
#include<iostream>
using namespace std;
int b, g, x, y, n, m, cnt, xl[5002], yl[5002]; 
bool a[5002][5002];
int main(){
	cin >> n >> m >> b >> g; 
	for (int i=1; i <= b; i++){
		cin >> x >> y;
		for (int j=x; j <= y; j++){
			if (xl[j]){
				continue;
			}else{
				xl[j] = true;
				for (int k=1; k <= m; k++){
					a[j][k] = true;
				}	
			}
		}
	}
	for (int i=1; i <= g; i++){
		cin >> x >> y;
		for (int j=x; j <= y; j++){
			if (yl[j]){
				continue;
			}else{
				yl[j] = true;
				for (int k=1; k <= n; k++){
					a[k][j] = true;
				}	
			}
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= m; j++){
			if (a[i][j]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}