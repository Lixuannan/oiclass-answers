//Created in Fri Nov 11 14:56:06 2022
#include<iostream>
using namespace std;
char str[257];
int main(){
	cin.getline(str, 255, '.');
	for (int i=0; i <= sizeof str - 1; i++){
		if (str[i] == ' '){
			cout << '#';
		}else if (str[i] >= 'a' && str[i] <= 'z'){
			cout << int(str[i]) - 96;
		}
	}
}