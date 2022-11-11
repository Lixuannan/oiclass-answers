//Created in Fri Nov 11 13:59:41 2022
#include<iostream>
using namespace std;
int ans;
string str, stri;
int main(){
	cin >> str >> stri;
	if (str.length() > stri.length()){
		ans = stri.length() - 1;
	}else{
		ans = str.length() - 1;
	}
	while(str.substr(0, ans) != stri.substr(stri.length() - ans, ans) 
	&& stri.substr(0, ans) != str.substr(str.length() - ans, ans)){
		ans -= 1;
	}
	cout << ans ;
}