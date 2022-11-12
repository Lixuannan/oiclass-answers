//Created in Sat Nov 12 09:25:28 2022
 //System: Darwin 22.1.0
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