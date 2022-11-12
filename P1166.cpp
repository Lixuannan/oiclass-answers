//Created in Sat Nov 12 11:58:42 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool a[9999][9999];
void fractal(int k, int x, int y){
	int t;
	if(k == 1){
		a[x][y] = true;
		return;
	}
	t = pow(3, k - 2);
	fractal(k - 1, x, y);
	fractal(k - 1, x + 2 * t, y);
	fractal(k - 1, x + t, y + t);
	fractal(k - 1, x, y + 2 * t);
	fractal(k - 1, x + 2 * t, y + 2 * t);
	return;
}
int n;
int main(){
	while (true){
		cin >> n;
		if(n == -1){
			return 0;
		}
		memset(a, 0, sizeof a);
		fractal(n, 1, 1);
		for(int i=1; i <= pow(3, n - 1); i++){
			for(int j=1; j <= pow(3, n - 1); j++){
				if(a[i][j]){
					cout << "X" ;
				}else{
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << "-" << endl;
	}
}