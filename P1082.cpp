//Created in Sat Nov 12 09:25:25 2022
 //System: Darwin 22.1.0
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