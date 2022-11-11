//Created in Fri Nov 11 14:30:49 2022
#include<iostream>
#include<iomanip>
using namespace std;
int n, yh[35][35];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		yh[i][1] = 1;
	}
	yh[2][2] =  1;
	for (int i=3; i <= n; i++){
		for (int j=2; j <= n; j++){
			yh[i][j] = yh[i-1][j] + yh[i-1][j-1];
		}
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			if (yh[i][j] != 0){
				cout << yh[i][j] << " ";
			}
		}
		cout << '\n';
	}
}