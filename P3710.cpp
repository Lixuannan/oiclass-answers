//Created in Fri Nov 11 14:56:47 2022
#include<iostream>
#include<algorithm>
using namespace std;
int sum(int n){
	int ret = 0;
	for (int i=1; i <= n; i++){
		if (n % i == 0 && i % 3 != 0){
			ret += i;
		}
	}
	return ret;
}
int n, a[999999], in;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> in;
		a[i] = sum(in);
	}
	stable_sort(a + 1, a + n + 1);
	for (int i=1; i <= n; i++){
		cout << a[i] << " ";
	}
}