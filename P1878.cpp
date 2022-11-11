//Created in Fri Nov 11 16:16:09 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
    	int sum = i;
    	int j = i;
		while(sum < n){
			j ++;
			sum += j;
		}
		if (sum == n && i != n && j != n){
			printf("%d %d\n", i, j);
			continue;
		}
	}
}