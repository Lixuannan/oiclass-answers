//Created in Sat Nov 12 11:58:36 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int maxl;
string in, ans;
int main(){
	while(cin >> in){
		if (in[in.length()-1] == '.'){
			in.erase(in.length()-1, in.length()-1);
			if (in.find('a') != in.npos && in.length() > maxl){
				maxl = in.length();
				ans = in;
			}
			break;
		}else{
			if (in.find('a') != in.npos && in.length() > maxl){
				maxl = in.length();
				ans = in;
			}
		}
	}
	cout << ans;
}