//Created in Fri Nov 11 16:04:11 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int r, c, n, in, a[102][102], cnt = 1;
int main(){
	cin >> r >> c >> n;
	for (int i=1; i <= r; i++){
		if (i % 2 == 1){
			for (int j=1; j <= c; j++){
				a[i][j] = cnt;
				cnt += 1;
			}
		}else{
			for (int j=c; j >= 1; j--){
				a[i][j] = cnt;
				cnt += 1;
			}
		}
	}
//	for (int i=1; i <= r; i++){
//		for (int j=1; j <= c; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
	for (int i=1; i <= n; i++){
		cin >> in;
		for (int j=1; j <= r; j++){
			for (int k=1; k <= c; k++){
				if (a[j][k] == in){
					cout << j << " " << k << endl;
					break;
				}
			}
		}
	}
}