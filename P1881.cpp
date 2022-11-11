//Created in Fri Nov 11 14:56:26 2022
#include<iostream>
using namespace std;
int x, y, i, cnt, xll, xur, yll, yur;
bool p[241][241];
int main(){
	cin >> x >> y >> i;
	for (int n=1; n <= i; n++){
		cin >> xll >> yll >> xur >> yur;
		for (int j=xll; j <= xur; j++){
			for (int k=yll; k <= yur; k++){
				p[j][k] = true;
			}
		}
	}
	for (int j=0; j <= 240; j++){
		for (int k=0; k <= 240; k++){
			if (p[j][k]){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}