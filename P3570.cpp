//Created in Fri Nov 11 16:16:22 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n, a, b, xmax, xmin = 99999, ymax, ymin = 99999;
int main(){
	cin >> n;
	for (int i=1; i <= n; i++){
		cin >> a >> b;
		if (a > xmax){
			xmax = a;
		}
		if (b > ymax){
			ymax = b;
		}
		if (b < ymin){
			ymin = b;
		}
		if (a < xmin){
			xmin = a;
		}
	}
	cout << max(xmax - xmin, ymax - ymin) * max(xmax - xmin, ymax - ymin);
}