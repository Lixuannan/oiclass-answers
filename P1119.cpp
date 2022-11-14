// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, ans[8], days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, day = 0;
int main(){
	cin >> n;
	for (int i=1900; i <= 1900 + n - 1; i++){
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0){
			days[2] = 29;
		}else {
			days[2] = 28;
		}
		for (int j=1; j <= 12; j++){
			for (int t=1; t <= days[j]; t++){
				day += 1;
				if (day > 7){
					day = 1;
				}
				if (t == 13) ans[day] += 1;
			}
		}
	}
	cout << ans[6] << " " << ans[7] << " ";
	for (int i=1; i <= 5; i++){
		cout << ans[i] << " ";
	}
}