//Created in Sat Nov 12 11:58:56 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, cnt, a[99999];

bool johc(int x, int y){
	if (x % 2 != y % 2){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
		if (johc(a[i - 1], a[i])){
			cout << i << " ";
			cnt += 1;
		}
	}
	cout << "\n" << cnt;
}