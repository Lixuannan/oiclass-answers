//Created in Fri Nov 11 15:24:25 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;

int sum;
char ch;
int n[26] = {1, 2, 3, 1, 2, 3, 
	1, 2, 3, 1, 2, 3, 1, 2, 3,
	1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
int main(){
	while (cin.get(ch)){
		if (ch == ' '){
			sum += 1;
		}else if (ch >= 'a' && ch <= 'z'){
			sum += n[ch - 'a'];
		}else{
			sum += 0;
		}
	}
	cout << sum;
}