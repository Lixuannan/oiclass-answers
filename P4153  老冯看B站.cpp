//Created in Wed Nov  9 16:22:18 2022
#include<iostream>
#include<cmath>
using namespace std;
unsigned long long n, size;
int main(){
	cin>>n;
	size = n * 1048576 * 8 / 32;
	cout<<size;
}