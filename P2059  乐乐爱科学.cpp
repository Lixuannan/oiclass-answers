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