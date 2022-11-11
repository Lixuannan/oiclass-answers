//Created in Fri Nov 11 15:12:51 2022
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