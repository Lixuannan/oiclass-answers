#include<iostream>
#include<cmath>
using namespace std;
unsigned long long n, size;
int main(){
	cin>>n;
	size = n * 1048576 * 8 / 32;
	cout<<size;
}