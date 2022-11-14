// Created in Sat Nov 12 16:27:44 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
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