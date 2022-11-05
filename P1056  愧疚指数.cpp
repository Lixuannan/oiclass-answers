#include<iostream>
using namespace std;
int n, a[121], in[200001], cnt[200001], cntn;
int main(){
	cin >> n;
	for (int i=n; i > 0; i--){
		cin >> in[i];
	}
	for (int i=1; i <= n; i++){
		for (int j=in[i] - 1; j > 0; j--){
			cntn += a[j];
		}
		a[in[i]] += 1;
		cnt[i] = cntn;
		cntn = 0;
	}
	for (int i=n; i > 0; i--){
		cout << cnt[i] << " ";
	}
}