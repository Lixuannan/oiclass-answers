//Created in Fri Nov 11 14:18:37 2022
#include<iostream>
using namespace std;
int main(){
	int n;
	double ans=0;
	cin>>n;
	for (double i=2; i<=n; i+=2){
		ans += 1/(i-1) - 1/i;
	}
	printf("%.8lf", ans);
}