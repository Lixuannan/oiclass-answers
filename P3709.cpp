//Created in Sat Nov 12 09:25:52 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int x, a[9999], b[9999], n;
int main(){
	cin >> x;
	for (int i=1; i <= x; i++){
		cin >> a[i] >> b[i];
	}
	cin >> n;
	for (int i=1; i <= x; i++){
		if (a[i] >= b[i]){
			cout <<  "done\n";
		}else if (b[i] - a[i] > n){
			cout << "-1\n";
		}else{
			cout << b[i] - a[i] << endl;
		}
	}
}