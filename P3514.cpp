//Created in Sat Nov 12 08:45:35 2022
 //System: Darwin 22.1.0
#include<iostream>
using namespace std;
int n,score,target,timein,rtime;
int main(){
	cin>>n;
	for (int i=1; i <= n; i++){
		cin>>score>>target>>timein>>rtime;
		while(score > target){
			score /= 10;
		}
		if (rtime > timein) cout<<"Time Limit Exceeded"<<endl;
		else if (score < target) cout<<"Wrong Answer"<<endl;
		else if (score == target) cout<<"Accepted"<<endl;
	}
}