#include<iostream>
using namespace std;
long long n, in, x, y, cnt;
int main(){
	cin >> n >> x >> y;
	for (int i=1; i <= n; i++){
		cin >> in;
		if (in >= x && in <= y){
			cnt += 1;
		}
	}
	cout << cnt;
}