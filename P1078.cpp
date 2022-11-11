//Created in Fri Nov 11 16:04:12 2022
 //System: Darwin 22.1.0
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