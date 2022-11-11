//Created in Fri Nov 11 10:52:06 2022
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