//Created in Sat Nov 12 08:45:15 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, cnt;
string t, tmp;
int main(){
	cin >> n;
	cin >> tmp;
	for (int i=1; i < n; i++){
		cin >> t;
		if (t != tmp){
			cnt += 1;
		}
		tmp = t;
	}
	cout << cnt + 1;
}