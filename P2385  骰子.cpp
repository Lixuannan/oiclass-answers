//Created in Fri Nov 11 11:49:28 2022
#include<iostream>
using namespace std;
int n[7] = {0, 1, 2, 3, 4, 5, 6};
int t, sum = 1;
string in;

void north(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[2];
	n[2] = n[6];
	n[6] = n[5];
	n[5] = tmp;
}
void east(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[4];
	n[4] = n[6];
	n[6] = n[3];
	n[3] = tmp;
}
void west(){
	int tmp = 0;
	tmp = n[1];
	n[1] = n[3];
	n[3] = n[6];
	n[6] = n[4];
	n[4] = tmp;
}
void south(){
	int tmp = n[1];
	n[1] = n[5];
	n[5] = n[6];
	n[6] = n[2];
	n[2] = tmp;
}
void right(){
	int tmp = n[2];
	n[2] = n[3];
	n[3] = n[5];
	n[5] = n[4];
	n[4] = tmp;
}
void left(){
	int tmp = n[2];
	n[2] = n[4];
	n[4] = n[5];
	n[5] = n[3];
	n[3] = tmp;
}
int main(){
	cin >> t;
	for (int i=1; i <= t; i++){
		cin >> in;
		if (in == "North"){
			north();
		}else if (in == "South"){
			south();
		}else if (in == "East"){
			east();
		}else if (in == "West"){
			west();
		}else if (in == "Right"){
			right();
		}else if (in == "Left"){
			left();
		}
		sum += n[1];
	}
	cout << sum;
}