// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int t, x, y, cnt;
string command;
int main(){
	cin >> command >> t;
	if (t > command.length()){
		while(cnt < command.length()){
			switch (command[cnt]){
			case 'E':{
					x = x;
				y += 1;
					break;
				}
				case 'S':{
				x -= 1;
					y = y;
					break;
				}
				case 'N':{
					x += 1;
					y = y;
					break;
				}
				case 'W':{
					x = x;
					y -= 1;
					break;
				}
			}
			cnt += 1;
		}	
		cnt = 0;
	}
	x *= t / command.length();
	y *= t / command.length();
	t %= command.length();
	while(cnt < t){
		// cout << command[cnt % command.length()];
		switch (command[cnt % command.length()]){
			case 'E':{
				x = x;
				y += 1;
				break;
			}
			case 'S':{
				x -= 1;
				y = y;
				break;
			}
			case 'N':{
				x += 1;
				y = y;
				break;
			}
			case 'W':{
				x = x;
				y -= 1;
				break;
			}
		}
		cnt += 1;
	}
	cout << y << " " << x;
}