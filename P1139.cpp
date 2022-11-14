// Created in Sat Nov 12 16:27:18 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>
using namespace std;
bool p[100000000];
int w, n, cnt, pi[100000000], leftP, rightP;
int main(){
	cin >> w >> n;
	leftP = 1;
	rightP = n;
	for (int i=1; i <= n; i++){
		cin >> pi[i];
	}
	sort(pi + 1, pi + n + 1);
	while(leftP <= rightP){
		cnt += 1;
		if(pi[leftP] + pi[rightP] <= w){
			leftP += 1;
			rightP -= 1; 
		}else{
			rightP -= 1;	
		}
	}
	cout << cnt;
}