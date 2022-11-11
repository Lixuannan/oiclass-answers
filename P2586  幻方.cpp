//Created in Fri Nov 11 11:49:41 2022
#include<iostream>
using namespace std;
int a[5][5], n, m;
int main(){
	for (int i=1; i<= 3; i++){
		for (int j=1; j <= 3; j++){
			cin>> a[i][j];
		}
	}
	for (int i=1; i<= 3; i++){
		for (int j=1; j <= 3; j++){
			if (a[i][j] == -1){
				for (int k=1; k <= 3; k++){
					if (a[i][k] != -1){
						m += a[i][k];
					}
				}
				if (i == 1){
					n = a[2][1] + a[2][2] + a[2][3] - m;
				}else if (i == 2 || i == 3){
					n = a[i-1][1] + a[i-1][2] + a[i-1][3] - m;
				}
				cout << n;
				return 0;
			}
		}
	}
}