//Created in Fri Nov 11 16:04:12 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, inde;
string str, ans;
int main(){
	cin >> n;
	for (int i=0; i <= n; i++){
		getline(cin, str);
		str.erase(0, str.rfind('@') + 1);
		while(str.find('#') != str.npos){
			if (str.find('#') == 0){
				str.erase(0, 1);
			}else{
				str.erase(str.find('#')-1, 2);
			}
		}
		if (!str.empty()){
			ans += str + '\n';
		}
	}
	cout << ans;
}