//Created in Sat Nov 12 08:44:52 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int n, m, index;
	cin>>n>>m;
	index = (n + 1)*m % 8;
	cout<<index; 
}