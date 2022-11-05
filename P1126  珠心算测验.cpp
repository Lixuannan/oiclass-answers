#include<iostream>
using namespace std;
int n, a[9999999], cnt;
bool p[9999999];
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a[i];
	}
	for (int i=1; i <= n; i++){
		for (int j=1; j <= n; j++){
			for (int k=1; k <= n; k++){
				if (i != j && j != k && !p[k]){
					if (a[i] + a[j] == a[k]){
						cnt += 1;
						p[k] = true;	
					}
				}
			}
		}
	}
	cout << cnt;
}