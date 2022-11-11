//Created in Fri Nov 11 16:04:21 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int main(){
	int n, m, index;
	cin>>n>>m;
	index = (n + 1)*m % 8;
	cout<<index; 
}