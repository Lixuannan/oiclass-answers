//Created in Sat Nov 12 09:25:26 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(string a, string b){
	return a + b > b + a;
}

int n;
string a[999999];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	stable_sort(a + 1, a + 1 + n, cmp);
	for (int i=1; i <= n; i++){
		cout << a[i];
	}
}