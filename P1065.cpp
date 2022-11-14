// Created in Sat Nov 12 16:27:13 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
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