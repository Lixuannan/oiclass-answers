//Created in Fri Nov 11 14:18:56 2022
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