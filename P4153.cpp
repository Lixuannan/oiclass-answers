//Created in Fri Nov 11 15:25:19 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>
using namespace std;
unsigned long long n, size;
int main(){
	cin>>n;
	size = n * 1048576 * 8 / 32;
	cout<<size;
}