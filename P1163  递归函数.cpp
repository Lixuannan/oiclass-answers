//Created in Wed Nov  9 16:21:50 2022
#include<iostream>
using namespace std;
bool p[101][101][101];
long long ans[101][101][101];
long long w(int a, int b, int c){
	if (a <= 0 || b <= 0 || c <= 0){
		return 1;
	}else if (a > 20 || b > 20 || c > 20){
		if (!p[20][20][20]){
			ans[20][20][20] = w(20, 20, 20);
			p[20][20][20] = true;
		}
		return ans[20][20][20];
	}else if (a < b && b < c){
		if (!p[a][b][c]){
			ans[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
			p[a][b][c] = true;
		}
		return ans[a][b][c];
	}else{
		if (!p[a][b][c]){
			ans[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a-1, b - 1, c - 1);
			p[a][b][c] = true;
		}
		return ans[a][b][c];
	}
}
long long a, b, c;
int main(){
	while(!cin.eof()){
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1){
			return 0;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
	}
}