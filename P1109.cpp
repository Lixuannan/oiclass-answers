//Created in Fri Nov 11 15:12:36 2022
#include<iostream>
#include<algorithm>
using namespace std;
long long n, a[2000000], cnt;
int main(){
	scanf("%lld", &n);
	for (int i=1; i <= n; i++){
		scanf("%lld", &a[i]);
	}
	sort(a, a + n + 1);
	for (int i=1; i <= n; i++){
		if (a[i] != a[i + 1]){
			cout << a[i] << " " << cnt + 1 << endl;
			cnt = 0;
		}else{
			cnt += 1;
		}
	}
}