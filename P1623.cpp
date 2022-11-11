//Created in Fri Nov 11 16:16:06 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
string str;


string times(string a, int b){
	string ans;
	for (int i=1; i <= b; i++){
		ans += a;
	}
	return ans;
}

int main(){
	cin >> str;
	for (int i=1; i <= 100; i++){
		for (int j=1; j <= 100; j++){
			if (str == times(str.substr(0, i), j)){
				cout << i;
				return 0;
			}
		}
	}
}