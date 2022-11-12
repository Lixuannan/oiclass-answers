//Created in Sat Nov 12 11:58:45 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int main(){
	int n, m, index;
	cin>>n>>m;
	index = (n + 1)*m % 8;
	cout<<index; 
}